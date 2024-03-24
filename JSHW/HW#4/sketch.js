//var groundHeight;
//var mountain1;
//var mountain2;
//
//var tree;
//
//var moon;
//var sun;
//var darkness;
//
//function setup()
//{
//	createCanvas(800, 600);
//	//set the groundHeight proportional to the canvas size
//	groundHeight = (height / 3) * 2;
//
//	//initalise the mountain objects with properties to help draw them to the canvas
//	mountain1 = {
//		x: 400,
//		y: groundHeight,
//		height: 320,
//		width: 230
//	};
//	mountain2 = {
//		x: 550,
//		y: groundHeight,
//		height: 200,
//		width: 130
//	};
//
//	//initalise the tree object
//	tree = {
//		x: 173,
//		y: groundHeight + 20,
//		trunkWidth: 30,
//		trunkHeight: 150,
//		canopyWidth: 120,
//		canopyHeight: 150,
//		
//	};
//
//    //initalise the sun 
//	sun = {
//		x: 150,
//		y: 70,
//		diameter: 80};
//    
//    moon =  {
//        x: 600, 
//        y: 70, 
//        diameter: 80};
//    //TASK: intialise a moon object with an extra property for brightness
//
//
//	//set the initial darkness
//	
//}
//
//
//
//function draw()
//{
//    darkness = min(mouseX/5.5, 185);
//	//TASK: update the values for the moons brightness, the sun's position and the darkness.
//	//You can either map this to the mouse's location (i.e. the futher left the mouse is the more daylight) or you can just change the values gradually over time.
//
//
//	//draw the sky
//	background(150-darkness, 200-darkness, 255-darkness);
//	noStroke();
//
//	//draw the sun
//	fill(255, 255, 0);
//	ellipse(sun.x, max(sun.y, mouseX), sun.diameter);
//    
//    //draw the moon
//    fill(150+darkness/3,200+darkness/2,255+darkness/3);
//    ellipse(moon.x, moon.y, moon.diameter );
//    
//    //TASK: you'll need to draw the moon too. Make sure you use brightness to adjust the colour
//
//	//draw the ground and make it green
//	fill(70-darkness, max(100, 200-darkness), 0);
//	rect(0, groundHeight, width, height - groundHeight);
//
//	//draw the mountains
//	fill(max(40, 120-darkness));
//	triangle(mountain1.x, mountain1.y,
//		mountain1.x + mountain1.width, mountain1.y,
//		mountain1.x + (mountain1.width / 2), mountain1.y - mountain1.height);
//
//	triangle(mountain2.x, mountain2.y,
//		mountain2.x + mountain2.width, mountain2.y,
//		mountain2.x + (mountain2.width / 2), mountain2.y - mountain2.height);
//    
//    //TASK: You can draw the tree yourself
//
//   fill(max(70, 128-darkness),0,0); 
//    rect(tree.x, tree.y,tree.trunkWidth,tree.trunkHeight);
//    fill(0,max(80,144-darkness),48-darkness);
//    ellipse(tree.x, tree.y, tree.canopyWidth, tree.canopyHeight);
//    
//
//    fill(max(70, 128-darkness),0,0); 
//    rect(tree.x+140,tree.y-40,tree.trunkWidth,tree.trunkHeight);
//    fill(0,max(80,144-darkness),48-darkness);
//    ellipse(tree.x+153, tree.y-40, tree.canopyWidth, tree.canopyHeight);
//	
//    fill(max(70, 128-darkness),0,0); 
// 	rect(tree.x+500,tree.y+40,tree.trunkWidth,tree.trunkHeight);
//    fill(0,max(80,144-darkness),48-darkness);
//    ellipse(tree.x+513, tree.y+40, tree.canopyWidth, tree.canopyHeight);
//}

/*

The Game Project

2 - Game character

Use p5 drawing functions such as rect, ellipse, line, triangle and
point to draw the different states of your game character.

Write the code so that your character appears inside the box for each
state.

IMPORTANT: For each box the variables gameChar_x & gameChar_y are set to the bottom
center of the box. You must combine these variables with arithmetic to
determine the position of each shape that you draw. This will later allow
you to adjust the position of your game character.

Each state is worth two marks:

//standing front facing = 2
//jumping facing forwards = 2
//walking left = 2
//walking right = 2
//jumping left and jumping right = 2

0 marks = not a reasonable attempt
1 mark = attempted but it lacks detail and you didn't use gameChar_x and gameChar_y correctly
2 marks = you've used a selction of shape functions and made consistent use of gameChar_x and gameChar_y

WARNING: Do not get too carried away. If you're character takes more than 5 lines
of code to draw then you've probably over done it.

** Only submit your sketch.js **

*/

var gameChar_x = 0;
var gameChar_y = 0;

function setup()
{
	createCanvas(400, 600);
}

function draw()
{
	background(255);

	//Standing, facing frontwards

	stroke(100);
	noFill();
	rect(20, 60, 50, 80);
	noStroke();
	fill(0);
	text("1. standing front facing", 20, 160);

	gameChar_x = 45;
	gameChar_y = 137;
	//Add your code here ...


	//Jumping facing forwards
	stroke(100);
	noFill();
	rect(220, 60, 50, 80);
	noStroke();
	fill(0);
	text("2. jumping facing forwards", 220, 160);

	gameChar_x = 245;
	gameChar_y = 137;
	//Add your code here ...


	//Walking, turned left
	stroke(100);
	noFill();
	rect(20, 260, 50, 80);
	noStroke();
	fill(0);
	text("3. Walking left", 20, 360);

	gameChar_x = 45;
	gameChar_y = 337;
	//Add your code here ...


	//Walking, turned right
	stroke(100);
	noFill();
	rect(220, 260, 50, 80);
	noStroke();
	fill(0);
	text("4. Walking right", 220, 360);

	gameChar_x = 245;
	gameChar_y = 337;
	//Add your code here ...


	//Jumping right
	stroke(100);
	noFill();
	rect(20, 460, 50, 80);
	noStroke();
	fill(0);
	text("5. Jumping to the right", 20, 560);

	gameChar_x = 45;
	gameChar_y = 537;
	//Add your code here ...


	//Jumping to the left
	stroke(100);
	noFill();
	rect(220, 460, 50, 80);
	noStroke();
	fill(0);
	text("6. Jumping to the left", 220, 560);

	gameChar_x = 245;
	gameChar_y = 537;
	//Add your code here ...

}