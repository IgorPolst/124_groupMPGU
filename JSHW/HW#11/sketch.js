var flowers = [];

function setup() {
	createCanvas(1000, 500);

	for (var i = 0; i < 10; i++) {
		var flower = {
			base_x: i * 100,
			base_y: height - 50,
			stem_h: random(50, 400),
			col: color(random(0, 255), random(0, 255), random(0, 255))
		};
		flowers.push(flower);
	}
}

function draw() {
	background(150, 150, 250);

	for (var i = 0; i < flowers.length; i++) {
		drawFlower(flowers[i]);
	}
}

function drawFlower(flower) {
	noFill();
	strokeWeight(10);
	stroke(0, 200, 50);
	curve(flower.base_x + 200, flower.base_y + 100,
		flower.base_x, flower.base_y,
		flower.base_x, flower.base_y - flower.stem_h,
		flower.base_x - 200, flower.base_y - (flower.stem_h + 100));

	noStroke();
	fill(flower.col);
	ellipse(flower.base_x + 45, flower.base_y - flower.stem_h, 70, 50);
	ellipse(flower.base_x - 45, flower.base_y - flower.stem_h, 70, 50);
	ellipse(flower.base_x, flower.base_y + 45 - flower.stem_h, 50, 70);
	ellipse(flower.base_x, flower.base_y - 45 - flower.stem_h, 50, 70);

	// Draw the center (heart shape)
	fill(255, 0, 0);
	beginShape();
	vertex(flower.base_x, flower.base_y - flower.stem_h + 10);
	bezierVertex(flower.base_x + 20, flower.base_y - flower.stem_h - 20,
		flower.base_x + 30, flower.base_y - flower.stem_h + 10,
		flower.base_x, flower.base_y - flower.stem_h + 50);
	bezierVertex(flower.base_x - 30, flower.base_y - flower.stem_h + 10,
		flower.base_x - 20, flower.base_y - flower.stem_h - 20,
		flower.base_x, flower.base_y - flower.stem_h + 10);
	endShape(CLOSE);
}
