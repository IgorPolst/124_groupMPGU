var screenBorder;
var tadpoles;

function setup() {

	createCanvas(1200, 800);
	screenBorder = 100;
	tadpoles = [];
	// Создаёт ир=кинки и их изначальное слуайное положение
	for (var i = 0; i < 100; i++) {
		tadpoles.push(
			createTadpole(
				random(0, width + screenBorder),
				random(0, height + screenBorder)
			)
		);
	}
}

function draw() {

	background(0, 105, 148);
	// Отрисовка всех икринок
	for (let i = 0; i < tadpoles.length; i++) {
		tadpoles[i].update();
		tadpoles[i].draw();
	};
}



function mousePressed() {
	for (let i = 0; i < 100; i++) {
		var v = createVector(mouseX, mouseY); //Создаёт вектор с координатами расположения курсора

		if (!tadpoles[i].isHatched) { // Проверяет вылупленность икринки
			tadpoles[i].testClick(v); //Проверяет попадение в икринку и меняет её состояни на вылупившуюся 
		} else if (!tadpoles[i].isFrog && tadpoles[i].isHatched) { //Вылупился головастик и не стал ли головастик лягушкой
			tadpoles[i].testClick(v);
		};
	};

}

function createTadpole(x, y) {
	let tadpole = {

		pos: undefined, // Вектор расположения
		dir: undefined, // Вектор направления движения
		isHatched: false, // Стала ли мальком
		isFrog: false, // Стала ли лягушкой
		tailFlick: 5, // Длина хвоста малька
		tailIncr: -1, //Скорость колебания хвостика малька


		setup: function (x, y) { // Создаёт первоначальную икринку 
			this.pos = createVector(x, y);
			this.dir = createVector(random(-1, 1), random(-1, 1));
			this.dir.normalize();
		},

		draw: function () { // Отрисовка состояний
			push();

			translate(this.pos.x, this.pos.y);

			if (!this.isHatched) { // Икринка

				fill(100, 100);
				stroke(150);
				ellipse(0, 0, 25);
				fill(0);
				ellipse(0, 0, 6);

			} else if (!this.isFrog) { // Малёк
				rotate(this.dir.heading());
				fill(0);
				stroke(0);
				ellipse(0, 0, 12, 8);
				strokeWeight(2);
				noFill();
				beginShape();

				curveVertex(-6, 0);
				curveVertex(-6, 0);
				curveVertex(-18, this.tailFlick);
				curveVertex(-36, 0);
				curveVertex(-36, 0);
				endShape();
			} else {


				// Draw frog body
				fill('green');
				ellipse(0, 0, 40, 50);

				// Draw head
				fill('green');
				ellipse(0, 0 - 15, 30, 35);

				// Draw eyes
				fill('white');
				ellipse(0 - 10, 0 - 20, 12, 12); // Левый глаз
				ellipse(0 + 10, 0 - 20, 12, 12); // Правый глаз

				// Draw pupils
				fill('black');
				ellipse(0 - 15, 0 - 20, 6, 6); // Левый зрачок
				ellipse(0 + 15, 0 - 20, 6, 6); // Правый зрачок

				// Draw mouth
				noFill();
				stroke('black');
				strokeWeight(2);
				arc(0, 0 - 10, 20, 10, 0, PI);
			};

			pop();
		},

		update: function () {
			if (!this.isHatched) {// Колебание на месте икринок
				this.pos.x += random(-0.5, 0.5);
				this.pos.y += random(-0.5, 0.5);
			} else if (this.isHatched && !this.isFrog) {
				this.tailFlick += this.tailIncr;
				if (abs(this.tailFlick) > 5) 
					this.tailIncr *= -1;			
				this.pos.add(this.dir);
			} else 
				this.pos.add(this.dir);
			this.screenWrap();
		},

		screenWrap: function () { // Обработка в случае ухода за экран
			if (this.pos.x > width + screenBorder) {
				this.pos.x -= width + screenBorder;
			} else if (this.pos.x < -screenBorder) {
				this.pos.x += width + screenBorder;
			}

			if (this.pos.y > height + screenBorder) {
				this.pos.y -= height + screenBorder;
			} else if (this.pos.y < -screenBorder) {
				this.pos.y += height + screenBorder;
			}
		},

		testClick: function (mouse) { // Проверяет попал ли курсор в область объекта = 25
			if (this.pos.dist(mouse) < 25) {
				if (!this.isHatched)
					this.isHatched = true;
				else
					this.isFrog = true;
			}
		}
	};
	tadpole.setup(x, y);
	return tadpole;
}
