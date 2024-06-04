var kitty1;
var kitty2;

function setup() {
	createCanvas(1000, 500);

	function Kity(xPos, yPos, color) {
		this.x = xPos;
		this.y = yPos;
		this.color = color;
		this.drawKity = function () {
			stroke(0, 0, 0);
			strokeWeight(4);
			//V1
			//fill(255,255,255);
			fill(100, 100, 100);

			//outline of the cat
			triangle(this.x, this.y + 150, this.x + 20, this.y - 50, this.x + 100, this.y + 150);
			triangle(this.x + 300, this.y + 150, this.x + 280, this.y - 50, this.x + 200, this.y + 150);
			ellipse(this.x + 150, this.y + 150, 300, 300);

			//collar
			fill(230, 0, 0);
			rect(this.x + 30, this.y + 270, 240, 30);
			fill(255, 255, 0);

			// and bell
			fill(color);
			ellipse(this.x + 150, this.y + 285, 30, 30);

			//eyes
			fill(0, 0, 0);
			stroke(201, 226, 59);
			strokeWeight(8);

			ellipse(this.x + 95, this.y + 120, 30, 30);
			ellipse(this.x + 205, this.y + 120, 30, 30);

			//nose
			fill(255, 180, 180);
			stroke(0, 0, 0);
			strokeWeight(4);
			triangle(this.x + 130, this.y + 160, this.x + 170, this.y + 160, this.x + 150, this.y + 180)

			//mouth
			line(this.x + 150, this.y + 180, this.x + 150, this.y + 210);
			line(this.x + 150, this.y + 210, this.x + 120, this.y + 220);
			line(this.x + 150, this.y + 210, this.x + 180, this.y + 220);

			//whiskers
			line(this.x + 130, this.y + 190, this.x + 25, this.y + 170);
			line(this.x + 130, this.y + 190, this.x + 20, this.y + 190);
			line(this.x + 130, this.y + 190, this.x + 25, this.y + 210);

			line(this.x + 170, this.y + 190, this.x + 275, this.y + 170);
			line(this.x + 170, this.y + 190, this.x + 280, this.y + 190);
			line(this.x + 170, this.y + 190, this.x + 275, this.y + 210);
		}
	};
	kity1 = new Kity(50,50,"red");
	kity2 = new Kity(400, 50, "white");
	kity3 = new Kity(700. 50, "green")
}

function draw() {
	background(300);
	kity1.drawKity();
	kity2.drawKity();
	kity3.drawKity();
}

