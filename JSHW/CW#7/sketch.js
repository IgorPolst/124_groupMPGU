var gameChar_x;
var gameChar_y;
var floorPos_y;
var diamonds = [];
var isLeft;
var isFalling;
var isRight;
var isPlummeting;
var speed;
var jumpSpeed;
var JUMPSPEED;
var clouds_coor;
var sun;
var vertex;
var vertex_small;
var tree_coor;
var groundHeight;
var treeHeight;
var collectedDiamonds = 0; // Переменная для хранения количества собранных алмазов
var diamond_draw = [];

function setup() {
	createCanvas(1024, 576);
	floorPos_y = height * 3 / 4;
	gameChar_x = width / 2;
	gameChar_y = floorPos_y;
	speed = 4;
	jumpSpeed = 10;
	JUMPSPEED = 10;
	groundHeight = 500;
	treeHeight = 80;

	//cloud
	clouds_coor = {
		cor_x: [],
		cor_y: [],
		color: ["white", "AliceBlue", "DeepSkyBlue"]
	}
	for (let i = 0; i < 8; i++) {
		clouds_coor.cor_x.push(random(100, 1000));
		clouds_coor.cor_y.push(random(50, 250));
	};

	//diamoond
	for (let i = 0; i < 4; i++) {
		var diamond_position = {
			pos_x: random(30, 1000), //random(30, 1000),
			pos_y: random(350, 400), //random(350, 400),
			scale: 1.3,
			collected: false
		};
		diamonds.push(diamond_position);
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

function countCollectedDiamond() {
	collectedDiamonds++; // Увеличить счетчик собранных алмазов на 1
}

function checkDiamondCollision(diamond, character) {
	if (character.x > diamond_draw.x - 20 && character.x < diamond_draw.x + 20 && character.y > diamond_draw.y - 20 && character.y < diamond_draw.y + 20) {
		return true; // Столкновение произошло
	} else {
		return false; // Нет столкновения
	}
}

function drawDiamond() {
  for (var i = 0; i < diamonds.length; i++) {
    var diamond_position = diamonds[i];
    var diamond_draw = {
      up_y: diamond_position.pos_y,
      up_1x: diamond_position.pos_x,
      up_2x: diamond_position.pos_x + 10 * diamond_position.scale,
      up_3x: diamond_position.pos_x + 20 * diamond_position.scale,
      midl_y: diamond_position.pos_y + 10 * diamond_position.scale,
      midl_1x: diamond_position.pos_x - 5 * diamond_position.scale,
      midl_2x: diamond_position.pos_x + 5 * diamond_position.scale,
      midl_3x: diamond_position.pos_x + 15 * diamond_position.scale,
      midl_4x: diamond_position.pos_x + 25 * diamond_position.scale,
      down_x: diamond_position.pos_x + 10 * diamond_position.scale,
      down_y: diamond_position.pos_y + 30 * diamond_position.scale
    };

    fill(30, 144, 255);
    triangle(diamond_draw.up_1x, diamond_draw.up_y, diamond_draw.midl_2x, diamond_draw.midl_y, diamond_draw.up_2x, diamond_draw.up_y);
    triangle(diamond_draw.up_2x, diamond_draw.up_y, diamond_draw.midl_3x, diamond_draw.midl_y, diamond_draw.up_3x, diamond_draw.up_y);

    fill(135, 206, 250);
    triangle(diamond_draw.midl_1x, diamond_draw.midl_y, diamond_draw.up_1x, diamond_draw.up_y, diamond_draw.midl_2x, diamond_draw.midl_y);
    triangle(diamond_draw.midl_2x, diamond_draw.midl_y, diamond_draw.up_2x, diamond_draw.up_y, diamond_draw.midl_3x, diamond_draw.midl_y);
    triangle(diamond_draw.midl_3x, diamond_draw.midl_y, diamond_draw.up_3x, diamond_draw.up_y, diamond_draw.midl_4x, diamond_draw.midl_y);

    fill(72, 61, 139);
    triangle(diamond_draw.midl_1x, diamond_draw.midl_y, diamond_draw.down_x, diamond_draw.down_y, diamond_draw.midl_2x, diamond_draw.midl_y);
    triangle(diamond_draw.midl_3x, diamond_draw.midl_y, diamond_draw.down_x, diamond_draw.down_y, diamond_draw.midl_4x, diamond_draw.midl_y);

    fill(123, 104, 238);
    triangle(diamond_draw.midl_2x, diamond_draw.midl_y, diamond_draw.down_x, diamond_draw.down_y, diamond_draw.midl_3x, diamond_draw.midl_y);
    if (checkDiamondCollision({
      x: diamond_draw.up_2x,
      y: diamond_draw.up_y
    }, {
      x: gameChar_x,
      y: gameChar_y
    })) {
      if (!diamonds[i].collected) {
        countCollectedDiamond(); // Увеличение счетчика собранных алмазов
        diamonds[i].collected = true; // Установка флага собранного алмаза
      }
    }
  }
}

function drawTokens() {
    for (var i = 0; i < diamonds.length; i++) {
        if (!diamonds[i].collected) {
            fill(255, 255, 0);
            ellipse(diamonds[i].x, diamonds[i].y, 30, 30);
        }
    }
}
//Отрисовка побочных объектов
function drawCloud() {
	for (var i = 0; i < 8; i++) {
		var cloud = {
			x: clouds_coor.cor_x[i],
			y: clouds_coor.cor_y[i],
			diameter: 40
		};

		noStroke(); // Убираем обводку
		fill(clouds_coor.color[i % 3]);

		// Рисуем облако с различными диаметрами и позициями
		ellipse(cloud.x, cloud.y, cloud.diameter); // Центральный облака
		ellipse(cloud.x + 120, cloud.y, cloud.diameter); // Правое облако
		ellipse(cloud.x + 30, cloud.y, cloud.diameter * 1.5); // Левое облако
		ellipse(cloud.x + 90, cloud.y, cloud.diameter * 1.5); // Правое облако
		ellipse(cloud.x + 60, cloud.y - 10, cloud.diameter * 2); // Нижнее облако
	}
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
	treeCoor_x = [200, 600, 850, 1300];
	for (var i = 0; i < treeCoor_x.length; i++) {
		var tree = {
			x: treeCoor_x[i],
			y: groundHeight,
			trunkWidth: 30,
			trunkHeight: 20,
			canopyWidth: 120,
			canopyHeight: 100
		};
		fill(139, 69, 19);
		rect(tree.x, tree.y, tree.trunkWidth, tree.trunkHeight);
		fill(50, 190, 50);
		triangle(tree.x - 80, tree.y, tree.x, tree.y - 150, tree.x + 120, tree.y);
		fill(50, 100, 50);
		triangle(tree.x + 35, tree.y, tree.x, tree.y - 150, tree.x + 120, tree.y);
		fill(50, 190, 50);
		triangle(tree.x - 70, tree.y - 50, tree.x, tree.y - 200, tree.x + 100, tree.y - 50);
		fill(50, 100, 50);
		triangle(tree.x + 24, tree.y - 50, tree.x, tree.y - 200, tree.x + 100, tree.y - 50);
		fill(50, 190, 50);
		triangle(tree.x - 55, tree.y - 100, tree.x, tree.y - 250, tree.x + 80, tree.y - 100);
		fill(50, 100, 50);
		triangle(tree.x + 17, tree.y - 100, tree.x, tree.y - 250, tree.x + 80, tree.y - 100);
	}
}
	
//Вывод сообщений	
	function drawCollectedDiamonds() {
    fill(255);
    textSize(20);
    text("Collected Diamonds: " + collectedDiamonds, 20, 20);
}
	function drawMousePosition() {
    fill(255);
    textSize(20);
    text("Mouse X: " + mouseX + ", Mouse Y: " + mouseY, 20, 50);
}
	function drawCharacterPosition() {
       fill(255); // Белый цвет текста
    textSize(20); // Установка размера текста
    text("Character X: " +  gameChar_x  + ", Character Y: " + gameChar_y, 20, 80); // Отображение координат персонажа в верхнем левом углу
}
	


function draw() {
  background(100, 155, 255); // fill the sky blue
  noStroke();
  
  // Отображение заднего плана
  drawMountain();
  fill(0, 155, 0);
  rect(0, floorPos_y, width, height - floorPos_y);
  drawCloud();
  drawSun();
  drawDiamond();
  
  // Отображение деревьев
  drawTree();
  
  // Отображение персонажа
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
    drawJumpingFront();
    makeJump();
  } else {
    drawStandingFront();
  }
  
  // Перенос персонажа на другой край поля
  if (gameChar_x > width) {
    gameChar_x = 0;
  } else if (gameChar_x < 0) {
    gameChar_x = width;
  }
  
    // Проверка столкновения с токенами (алмазами)
  for (var i = 0; i < diamonds.length; i++) {
    if (!diamonds[i].collected && checkDiamondCollision(diamonds[i], { x: gameChar_x, y: gameChar_y })) {
      countCollectedDiamond(); // Увеличение счетчика собранных алмазов
      diamonds[i].collected = true; // Установка флага собранного алмаза
    }
  }
	 // Визуализация количества собранных алмазов, позиции мыши и позиции персонажа
	drawCollectedDiamonds();
    drawMousePosition();
    drawCharacterPosition();
}

function keyPressed() {
	if (keyCode === RIGHT_ARROW) {
		isRight = true;
	} else if (keyCode === LEFT_ARROW) {
		isLeft = true;
	} else if (keyCode === 32) {
		isFalling = true;
	}
}

function keyReleased() {

	if (keyCode === RIGHT_ARROW) {
		isRight = false;
	} else if (keyCode === LEFT_ARROW) {
		isLeft = false;
	}
}
