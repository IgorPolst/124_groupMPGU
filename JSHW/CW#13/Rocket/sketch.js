var rocket;
var baseLine;

function setup() {
	createCanvas(800, 600);

	baseLine = height - 100;

	rocket = {
		x: width / 2,
		y: baseLine,
		thrust: false,
		moveLeft: false,
		moveRight: false,
		draw: function () {
			fill(180);
			beginShape();
			vertex(rocket.x + 10, rocket.y + 60);
			vertex(rocket.x + 10, rocket.y + 20);
			vertex(rocket.x + 15, rocket.y);
			vertex(rocket.x + 20, rocket.y + 20);
			vertex(rocket.x + 20, rocket.y + 60);
			endShape(CLOSE);

			fill(255, 0, 0);
			beginShape();
			vertex(rocket.x, rocket.y + 60);
			vertex(rocket.x + 10, rocket.y + 40);
			vertex(rocket.x + 10, rocket.y + 60);
			endShape(CLOSE);

			beginShape();
			vertex(rocket.x + 30, rocket.y + 60);
			vertex(rocket.x + 20, rocket.y + 40);
			vertex(rocket.x + 20, rocket.y + 60);
			endShape(CLOSE);

			if (rocket.thrust) {
				fill(255, 150, 0);
				beginShape();
				vertex(rocket.x + 10, rocket.y + 60);
				vertex(rocket.x + 13, rocket.y + 80);
				vertex(rocket.x + 15, rocket.y + 70);
				vertex(rocket.x + 18, rocket.y + 80);
				vertex(rocket.x + 20, rocket.y + 60);
				endShape(CLOSE);
			}
		},
		move: function () {
			if (rocket.thrust && rocket.y > 0) {
				rocket.y -= 5;
			} else if (rocket.y < baseLine) {
				rocket.y += 5;
			}

			if (rocket.moveLeft && rocket.x > 0 && rocket.y != baseLine) {
				rocket.x -= 5;
			}

			if (rocket.moveRight && rocket.x < width && rocket.y != baseLine) {
				rocket.x += 5;
			}
		}
	};

}

function draw() {
	//move the rocket
	rocket.move();
	background(10);
	rocket.draw();
	//draw the rocket

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
