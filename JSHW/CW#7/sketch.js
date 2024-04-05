var gameChar_x;
var gameChar_y;
var floorPos_y;
var isLeft;
var isFalling;
var isRight;
var isPlummeting;
var speed;
var jumpSpeed;
var JUMPSPEED;
var diamond;
var position;
var cloud;
var sun;
var vertex;
var vertex_small;
var tree;
var groundHeight;
var treeHeight;


function setup() {
	createCanvas(1024, 576);
	floorPos_y = height * 3 / 4;
	gameChar_x = width / 2;
	gameChar_y = floorPos_y;
	speed = 4;
	jumpSpeed = 10;
	JUMPSPEED = 10;
	groundHeight = 400;
	treeHeight = 80;

	position = {
		pos_x: random(30, 1000),
		pos_y: random(350, 400),
		scale: 1.3
	};
	diamond = {
		up_y: position.pos_y,
		up_1x: position.pos_x,
		up_2x: position.pos_x + 10 * position.scale,
		up_3x: position.pos_x + 20 * position.scale,
		midl_y: position.pos_y + 10 * position.scale,
		midl_1x: position.pos_x - 5 * position.scale,
		midl_2x: position.pos_x + 5 * position.scale,
		midl_3x: position.pos_x + 15 * position.scale,
		midl_4x: position.pos_x + 25 * position.scale,
		down_x: position.pos_x + 10 * position.scale,
		down_y: position.pos_y + 30 * position.scale
	};
	cloud = {
		x1: 150,
		y1: 170,
		x2: 180,
		y2: 180,
		x3: 210,
		y3: 180,
		x4: 120,
		y4: 180,
		x5: 90,
		y5: 180,
		diameter: 40
	};
	sun = {
		x: 400,
		y: 200,
		diameter: 100
	};
	vertex = {
		x1: 300,
		y1: 200,
		x2: 100,
		y2: 500,
		x3: 500,
		y3: 500
	};
	vertex_small = {
		x1: 300,
		y1: 200,
		x2: 267,
		y2: 250,
		x3: 333,
		y3: 250
	};
	tree = {
		x: 600,
		y: groundHeight + 100,
		trunkWidth: 20,
		trunkHeight: 10,
		canopyWidth: 20,
		canopyHeight: 10
	};

}

function makeJump() {
	gameChar_y -= jumpSpeed;
	jumpSpeed -= 1;
	if (jumpSpeed === -JUMPSPEED - 1) {
		jumpSpeed = JUMPSPEED;
		isFalling = false;
	}
}

function drawJumpingLeft() {
	//Jumping to the left
	//head
	fill(218, 169, 193);
	ellipse(gameChar_x, gameChar_y - 60, 30, 30);
	//body
	fill(155, 79, 79);
	rect(gameChar_x - 5, gameChar_y - 45, 12, 22);
	//arm_left
	fill(151, 38, 38);
	rect(gameChar_x - 3, gameChar_y - 55, 8, 17);
	//leg_left
	fill(151, 38, 38);
	rect(gameChar_x - 5, gameChar_y - 23, 15, 10);
}

function drawJumpingRight() {
	//head
	fill(218, 169, 193);
	ellipse(gameChar_x, gameChar_y - 60, 30, 30);
	//body
	fill(155, 79, 79);
	rect(gameChar_x - 5, gameChar_y - 45, 12, 22);
	//arm_left
	fill(151, 38, 38);
	rect(gameChar_x - 3, gameChar_y - 53, 8, 17);
	//leg_right
	fill(151, 38, 38);
	rect(gameChar_x - 10, gameChar_y - 23, 15, 10);
}

function drawGoLeft() {
	//head
	fill(218, 169, 193);
	ellipse(gameChar_x, gameChar_y - 50, 30, 30);

	//body
	fill(155, 79, 79);
	rect(gameChar_x - 5, gameChar_y - 35, 12, 22);
	//arm_left
	fill(151, 38, 38);
	rect(gameChar_x - 3, gameChar_y - 35, 8, 17);
	//leg_right
	fill(151, 38, 38);
	rect(gameChar_x - 5, gameChar_y - 13, 10, 15);
}

function drawGoRight() {
	//head
	fill(218, 169, 193);
	ellipse(gameChar_x, gameChar_y - 50, 30, 30);
	//body
	fill(155, 79, 79);
	rect(gameChar_x - 5, gameChar_y - 35, 12, 22);
	//arm_left
	fill(151, 38, 38);
	rect(gameChar_x - 3, gameChar_y - 35, 8, 17);
	//leg_right
	fill(151, 38, 38);
	rect(gameChar_x - 3, gameChar_y - 13, 10, 15);
}

function drawJumpingFront() {
	//head
	fill(218, 169, 193);
	ellipse(gameChar_x, gameChar_y - 60, 30, 30);
	//body
	fill(155, 79, 79);
	rect(gameChar_x - 10, gameChar_y - 45, 20, 22);
	//arm_left
	fill(151, 38, 38);
	rect(gameChar_x - 20, gameChar_y - 45, 10, 15);
	//arm_right
	fill(151, 38, 38);
	rect(gameChar_x + 10, gameChar_y - 45, 10, 10);
	//leg_right
	fill(151, 38, 38);
	rect(gameChar_x + 2, gameChar_y - 23, 8, 15);
	//leg_left
	fill(151, 38, 38);
	rect(gameChar_x - 10, gameChar_y - 23, 8, 10);
}

function drawStandingFront() {
	//head
	fill(218, 169, 193)
	ellipse(gameChar_x, gameChar_y - 50, 30, 30);
	//body
	fill(155, 79, 79)
	rect(gameChar_x - 10, gameChar_y - 35, 20, 22);
	//arm_left
	fill(151, 38, 38)
	rect(gameChar_x - 20, gameChar_y - 35, 10, 15);
	//arm_right
	fill(151, 38, 38);
	rect(gameChar_x + 10, gameChar_y - 35, 10, 15);
	//leg_right
	fill(151, 38, 38);
	rect(gameChar_x + 2, gameChar_y - 13, 8, 15);
	//leg_left
	fill(151, 38, 38);
	rect(gameChar_x - 10, gameChar_y - 13, 8, 15);
}

function drawDiamond() {
	fill(30, 144, 255);
	triangle(diamond.up_1x, diamond.up_y, diamond.midl_2x, diamond.midl_y, diamond.up_2x, diamond.up_y);
	triangle(diamond.up_2x, diamond.up_y, diamond.midl_3x, diamond.midl_y, diamond.up_3x, diamond.up_y);
	fill(135, 206, 250);
	triangle(diamond.midl_1x, diamond.midl_y, diamond.up_1x, diamond.up_y, diamond.midl_2x, diamond.midl_y);
	triangle(diamond.midl_2x, diamond.midl_y, diamond.up_2x, diamond.up_y, diamond.midl_3x, diamond.midl_y);
	triangle(diamond.midl_3x, diamond.midl_y, diamond.up_3x, diamond.up_y, diamond.midl_4x, diamond.midl_y);
	fill(72, 61, 139);
	triangle(diamond.midl_1x, diamond.midl_y, diamond.down_x, diamond.down_y, diamond.midl_2x, diamond.midl_y);
	triangle(diamond.midl_3x, diamond.midl_y, diamond.down_x, diamond.down_y, diamond.midl_4x, diamond.midl_y);
	fill(123, 104, 238);
	triangle(diamond.midl_2x, diamond.midl_y, diamond.down_x, diamond.down_y, diamond.midl_3x, diamond.midl_y);
}

function drawCloud() {
	noStroke();
	fill(133, 189, 239);
	ellipse(cloud.x3, cloud.y3, cloud.diameter);
	ellipse(cloud.x5, cloud.y5, cloud.diameter);
	ellipse(cloud.x4, cloud.y4, cloud.diameter * 1.5);
	ellipse(cloud.x2, cloud.y2, cloud.diameter * 1.5);
	ellipse(cloud.x1, cloud.y1, cloud.diameter * 2);
}

function drawSun() {
	fill(255, 255, 0);
	stroke(255, 215, 0);
	ellipse(sun.x, sun.y, sun.diameter);
	noStroke();
}

function drawMountain() {
	//2. a mountain in the distance
	// main triangle
	fill(47, 79, 79); // установка цвета перед отрисовкой
	triangle(vertex.x1, vertex.y1, vertex.x2, vertex.y2, vertex.x3, vertex.y3);

	// second triangle
	fill(255, 228, 225);
	triangle(vertex_small.x1, vertex_small.y1, vertex_small.x2, vertex_small.y2, vertex_small.x3, vertex_small.y3);

}

function drawTree() {
	fill(139, 69, 19);
	stroke("brown");
	rect(tree.x, tree.y, tree.trunkWidth, tree.trunkHeight);
	stroke("green");
	fill(50, 190, 50);
	triangle(tree.x - 80, tree.y, tree.x, tree.y - 150, tree.x + 120, tree.y);
	triangle(tree.x - 70, tree.y - 50, tree.x, tree.y - 200, tree.x + 100, tree.y - 50);
	triangle(tree.x - 55, tree.y - 100, tree.x, tree.y - 250, tree.x + 80, tree.y - 100);
	noStroke();

}


function draw() {

	///////////DRAWING CODE//////////

	background(100, 155, 255); //fill the sky blue
	noStroke();
	fill(0, 155, 0);
	rect(0, floorPos_y, width, height - floorPos_y);
	drawCloud();
	drawSun();
	drawDiamond();
	//draw the canyon
	//Движения персонажа
	if (isLeft && isFalling) {
		drawJumpingLeft();
		makeJump();
		gameChar_x -= speed;


	} else if (isRight && isFalling) {
		drawJumpingRight();
		makeJump();
		gameChar_x += speed;
	} else if (isLeft) {
		drawGoLeft();
		gameChar_x -= speed;
	} else if (isRight) {
		drawGoRight();
		gameChar_x += speed;

	} else if (isFalling || isPlummeting) {
		// add your jumping facing forwards code
		drawJumpingFront();
		makeJump();


	} else {
		// add your standing front facing code
		drawStandingFront();

	}
	drawMountain();
	drawTree();

	// Перенос персонажа на другой край поля
	if (gameChar_x > 1024) {
		gameChar_x = 0;
	} else if (gameChar_x < 0) {
		gameChar_x = 1024;
	}
}


function keyPressed() {
	// if statements to control the animation of the character when
	// keys are pressed.
	//open up the console to see how these work
	console.log("keyPressed: " + key);
	console.log("keyPressed: " + keyCode);
	if (keyCode === RIGHT_ARROW) {
		isRight = true;
	} else if (keyCode === LEFT_ARROW) {
		isLeft = true;
	} else if (keyCode === 32) {
		isFalling = true;
	}
}

function keyReleased() {
	// if statements to control the animation of the character when
	// keys are released.

	console.log("keyReleased: " + key);
	console.log("keyReleased: " + keyCode);

	if (keyCode === RIGHT_ARROW) {
		isRight = false;
	} else if (keyCode === LEFT_ARROW) {
		isLeft = false;
	}
}
