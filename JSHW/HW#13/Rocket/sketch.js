var rocket;
var baseLine;
var satars;
var stars;
var planets;

function setup() {
	createCanvas(800, 600);

	baseLine = height - 100;
	planets = {
		list: [],
		qua: Math.round(random (3)), // Количество отображаемых планет.
		planetColor: ["Red","Crimson","OrangeRed","Violet", "Indigo"],
		generate: function () { //Создаёт координаты расположения планет, их размеры.
			for (let i = 0; i < this.qua; i++) {
				let planet = {
					x: Math.round(random(0, 800)),
					y: Math.round(random(0, 600)),
					scale: Math.round(random(100,300)),
					color:this.planetColor[Math.round(random(4))] 
				};
				this.list.push(planet); // После чего добавляет в обший список
			}
		},
		draw: function () {
			for (let i = 0; i < this.qua; i++) {
				fill(this.list[i].color);
				ellipse(this.list[i].x, this.list[i].y, this.list[i].scale);
			}
		}
	}
	//Сохдание списка планет
	planets.generate();
	console.log("Planets: ", planets);
	console.log("List of planets: ", planets.list);
	
	stars = {
		list: [],
		qua: Math.round(random(50, 200)), // Количество отображаемых звёзд.
		generate: function () { //Создаёт координаты расположения звёзд, их размеры.
			for (let i = 0; i < this.qua; i++) {
				let star = {
					x: Math.round(random(0, 800)),
					y: Math.round(random(0, 600)),
					scale: Math.round(random(0, 100)) / 10,
				};
				this.list.push(star); // После чего добавляет в обший список

			}
		},
		draw: function () { //Отрисовывает звёзды 
			for (let i = 0; i < this.qua; i++) {
				// Распаковка объекта
				let posX = this.list[i].x;
				let posY = this.list[i].y;
				let R = this.list[i].scale;
				let peak = 6;
				//Расчёт угла между вершинами
				let angle = Math.round(360 / peak);
				fill("white");
				beginShape();
				vertex(posX, posY);
				vertex(posX + R, posY);
				//Попытка выход в разно конечные ззвёзды, но работает только для 5 и 6 конечных.
				for (let j = 1; j < peak; j++) {
					vertex(posX + R * Math.cos(j * angle), posY + R * Math.sin(j * angle));
					endShape(CLOSE);
				}
			}
		}
	};

	//Создание списка звёздного неба
	stars.generate();
	//Вывод в консоль показателей списка звёзд
	console.log(stars.list);
	console.log(stars);

	rocket = {
		x: width / 2,
		y: baseLine,
		thrust: false,
		moveLeft: false,
		moveRight: false,
		draw: function () { // Отрисовка ракеты
			strokeWeight(2);
			stroke("grey");
			line(rocket.x + 15, rocket.y + 2, rocket.x + 15, rocket.y - 20);
			stroke('red');
			strokeWeight(11);
			point(rocket.x + 15, rocket.y - 20);
			noStroke();

			//Тело ракеты
			fill(180);
			beginShape();
			vertex(rocket.x + 10, rocket.y + 60);
			vertex(rocket.x + 10, rocket.y + 20);
			vertex(rocket.x + 15, rocket.y);
			vertex(rocket.x + 20, rocket.y + 20);
			vertex(rocket.x + 20, rocket.y + 60);
			endShape(CLOSE);

			//Левое крыло
			fill(255, 0, 0);
			beginShape();
			vertex(rocket.x - 5, rocket.y + 65);
			vertex(rocket.x + 10, rocket.y + 20);
			vertex(rocket.x + 10, rocket.y + 65);
			endShape(CLOSE);

			//Правое крыло
			beginShape();
			vertex(rocket.x + 35, rocket.y + 65);
			vertex(rocket.x + 20, rocket.y + 20);
			vertex(rocket.x + 20, rocket.y + 65);
			endShape(CLOSE);

			//Двигатели на крыльях

			// Левый
			fill(180);
			beginShape();
			vertex(rocket.x - 7, rocket.y + 65);
			vertex(rocket.x - 7, rocket.y + 50);
			vertex(rocket.x - 2, rocket.y + 40);
			vertex(rocket.x + 3, rocket.y + 50);
			vertex(rocket.x + 3, rocket.y + 65);
			endShape(CLOSE);

			//Правый
			fill(180);
			beginShape();
			vertex(rocket.x + 37, rocket.y + 65);
			vertex(rocket.x + 37, rocket.y + 50);
			vertex(rocket.x + 32, rocket.y + 40);
			vertex(rocket.x + 27, rocket.y + 50);
			vertex(rocket.x + 27, rocket.y + 65);
			endShape(CLOSE);


			if (rocket.thrust) {
				//Пламя из двигателей
				fill(255, 150, 0);
				beginShape();
				vertex(rocket.x + 10, rocket.y + 60);
				vertex(rocket.x + 13, rocket.y + 80);
				vertex(rocket.x + 15, rocket.y + 70);
				vertex(rocket.x + 18, rocket.y + 80);
				vertex(rocket.x + 20, rocket.y + 60);
				endShape(CLOSE);
				beginShape();
				vertex(rocket.x - 7, rocket.y + 65);
				vertex(rocket.x - 4, rocket.y + 70);
				vertex(rocket.x - 2, rocket.y + 68);
				vertex(rocket.x + 1, rocket.y + 70);
				vertex(rocket.x + 3, rocket.y + 65);
				endShape(CLOSE);
				beginShape();
				vertex(rocket.x + 37, rocket.y + 65);
				vertex(rocket.x + 40, rocket.y + 70);
				vertex(rocket.x + 30, rocket.y + 68);
				vertex(rocket.x + 24, rocket.y + 70);
				vertex(rocket.x + 27, rocket.y + 65);
				endShape(CLOSE);

			}
		},
		move: function () { //Движение рокеты
			if (rocket.thrust && rocket.y > 0) { //Вертикальная скорость
				rocket.y -= 5;
			} else if (rocket.y < baseLine) {
				rocket.y += 5;
			}

			if (rocket.moveLeft && rocket.x > 0 && rocket.y != baseLine) { //Горизонталььная скорость
				rocket.x -= 5;
			}

			if (rocket.moveRight && rocket.x < width && rocket.y != baseLine) {
				rocket.x += 5;
			}
		}
	};

}

function draw() {
	background(10);
	//Отрисовка звёзд на экране
	stars.draw();
	//Отрисовка планет
	planets.draw();
	//draw the rocket
	rocket.draw();
	//move the rocket
	rocket.move();

}

function keyPressed() {
	if (key == "W") {
		rocket.thrust = true;
	}

	if (key == "A") {
		rocket.moveLeft = true;
	}

	if (key == "D") {
		rocket.moveRight = true;
	}
}

function keyReleased() {
	if (key == "W") {
		rocket.thrust = false;
	}

	if (key == "A") {
		rocket.moveLeft = false;
	}

	if (key == "D") {
		rocket.moveRight = false;
	}

}
