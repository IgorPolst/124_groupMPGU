var diamond;
var position;
var cloud;
var tree;
var groundHeight;
var treeHeight;
var vertex; // объявление переменной vertex
var vertex_small;
var sun;
var grass; 
var gameChar_x = 0;
var gameChar_y = 0;

function setup()
{
	createCanvas(1024, 576);
	position = {pos_x: 200, pos_y: 470, scale: 1.7}
	diamond = {
    up_y:position.pos_y,
    up_1x:position.pos_x,
    up_2x:position.pos_x+10*position.scale,
    up_3x:position.pos_x+20*position.scale,
    midl_y:position.pos_y+10*position.scale,
    midl_1x:position.pos_x-5*position.scale,
    midl_2x:position.pos_x+5*position.scale,
    midl_3x:position.pos_x+15*position.scale,
    midl_4x:position.pos_x+25*position.scale,
    down_x:position.pos_x+10*position.scale,
    down_y:position.pos_y+30*position.scale};
	

	
	cloud = {        x1:150,
        y1:170,        x2:180,
        y2:180,        x3:210,
        y3:180,        x4:120,
        y4:180,        x5:90,
        y5:180,        diameter:40
    };
	
	groundHeight = 400;
    treeHeight = 80;
  
    tree = {
    x: 600,
    y: groundHeight + 100,
    trunkWidth: 20,
    trunkHeight: 10,
    canopyWidth: 20,
    canopyHeight: 10
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
	 sun = {
    x: 400,
    y: 200,
    diameter: 100,
  };
}

function draw()
{
	background(100, 155, 255); //fill the sky blue

	

	//1. a cloud in the sky
	background(100, 155, 255); 
	
	fill(0,155,0);
	rect(40, 432, 1024, 144); //draw some green ground
  	//6. Sun
  	fill(255, 255, 0);
  	stroke(255, 215, 0);
  	ellipse(sun.x, sun.y, sun.diameter);
	
	//fill the sky blue
	noStroke();
    fill(133,189,239);
    ellipse(cloud.x3,cloud.y3,cloud.diameter);    
	ellipse(cloud.x5,cloud.y5,cloud.diameter);
 	ellipse(cloud.x4,cloud.y4,cloud.diameter*1.5);    
	ellipse(cloud.x2,cloud.y2,cloud.diameter*1.5);
    ellipse(cloud.x1,cloud.y1,cloud.diameter*2);

	//2. a mountain in the distance
	// main triangle
    fill(47, 79, 79); // установка цвета перед отрисовкой
    triangle(vertex.x1, vertex.y1, vertex.x2, vertex.y2, vertex.x3, vertex.y3);

    // second triangle
    fill(255, 228, 225);
    triangle(vertex_small.x1, vertex_small.y1, vertex_small.x2, vertex_small.y2, vertex_small.x3, vertex_small.y3);

	//3. a tree
	fill(139, 69, 19);
	stroke("brown");
  	rect(tree.x, tree.y, tree.trunkWidth, tree.trunkHeight);
	stroke("green");
  	fill(50, 190, 50);
  	triangle(tree.x - 80,tree.y,tree.x,tree.y - 150,tree.x + 120, tree.y);
  	triangle(tree.x - 70,tree.y - 50,tree.x,tree.y - 200,tree.x + 100, tree.y - 50);
  	triangle(tree.x - 55 ,tree.y - 100,tree.x,tree.y - 250,tree.x + 80, tree.y - 100);
	noStroke();
	//4. a canyon
	//NB. the canyon should go from ground-level to the bottom of the screen

	gameChar_x = 750;
	gameChar_y = 500;
	//Add your code  ...
	fill("blue");
	rect(gameChar_x-9, gameChar_y+8, 20, 30);
	fill("pink");
	ellipse(gameChar_x, gameChar_y, 30);
	fill("brown");
	rect(gameChar_x+3, gameChar_y+35, 10,10);
	rect(gameChar_x-12, gameChar_y+35, 10,10);


	//5. a collectable token - eg. a jewel, fruit, coins
  fill(30,144,255);
  triangle(diamond.up_1x,diamond.up_y, diamond.midl_2x, diamond.midl_y, diamond.up_2x,diamond.up_y);
  triangle(diamond.up_2x,diamond.up_y, diamond.midl_3x, diamond.midl_y, diamond.up_3x,diamond.up_y);
  
  fill(135,206,250);
  triangle(diamond.midl_1x, diamond.midl_y, diamond.up_1x, diamond.up_y, diamond.midl_2x, diamond.midl_y);
  triangle(diamond.midl_2x, diamond.midl_y, diamond.up_2x, diamond.up_y, diamond.midl_3x, diamond.midl_y);
  triangle(diamond.midl_3x, diamond.midl_y, diamond.up_3x, diamond.up_y, diamond.midl_4x, diamond.midl_y);
  
  fill(72,61,139);
  triangle(diamond.midl_1x, diamond.midl_y, diamond.down_x, diamond.down_y, diamond.midl_2x, diamond.midl_y);
  triangle(diamond.midl_3x, diamond.midl_y, diamond.down_x, diamond.down_y, diamond.midl_4x, diamond.midl_y);
  
  fill(123,104,238);
  triangle(diamond.midl_2x, diamond.midl_y, diamond.down_x, diamond.down_y, diamond.midl_3x, diamond.midl_y);
    
    
}
