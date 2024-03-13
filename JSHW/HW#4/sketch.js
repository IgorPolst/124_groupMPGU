var groundHeight;
var mountain1;
var mountain2;

var tree;

var moon;
var sun;
var darkness;

function setup()
{
	createCanvas(800, 600);
	//set the groundHeight proportional to the canvas size
	groundHeight = (height / 3) * 2;

	//initalise the mountain objects with properties to help draw them to the canvas
	mountain1 = {
		x: 400,
		y: groundHeight,
		height: 320,
		width: 230
	};
	mountain2 = {
		x: 550,
		y: groundHeight,
		height: 200,
		width: 130
	};

	//initalise the tree object
	tree = {
		x: 173,
		y: groundHeight + 20,
		trunkWidth: 30,
		trunkHeight: 150,
		canopyWidth: 120,
		canopyHeight: 150
	};

    //initalise the sun 
	sun = {
		x: 150,
		y: 70,
		diameter: 80,
	};
    
    moon =  {
        x: 600, 
        y: 70, 
        diameter: 80,};
    //TASK: intialise a moon object with an extra property for brightness


	//set the initial darkness
	
}



function draw()
{
    darkness = min(185,mouseX/5.5);
	//TASK: update the values for the moons brightness, the sun's position and the darkness.
	//You can either map this to the mouse's location (i.e. the futher left the mouse is the more daylight) or you can just change the values gradually over time.


	//draw the sky
	background(150-darkness, 200-darkness, 255-darkness);
	noStroke();

	//draw the sun
	fill(255, 255, 0);
	ellipse(sun.x, max(sun.y, mouseX), sun.diameter);
    
    //draw the moon
    fill(min(255, 150+darkness/2),min(255, 200+darkness/2),min(255, 255+darkness/2));
    ellipse(moon.x, moon.y, moon.diameter );
    
    //TASK: you'll need to draw the moon too. Make sure you use brightness to adjust the colour

	//draw the ground and make it green
	fill(70-darkness, max(100, 200-darkness), 0);
	rect(0, groundHeight, width, height - groundHeight);

	//draw the mountains
	fill(max(40, 120-darkness));
	triangle(mountain1.x, mountain1.y,
		mountain1.x + mountain1.width, mountain1.y,
		mountain1.x + (mountain1.width / 2), mountain1.y - mountain1.height);

	triangle(mountain2.x, mountain2.y,
		mountain2.x + mountain2.width, mountain2.y,
		mountain2.x + (mountain2.width / 2), mountain2.y - mountain2.height);
    
    //TASK: You can draw the tree yourself

   fill(max(70, 128-darkness),0,0); 
    rect(tree.x,tree.y,tree.trunkWidth,tree.trunkHeight);
    fill(0,max(80,144-darkness),48-darkness);
    ellipse(tree.x, tree.y, tree.canopyWidth, tree.canopyHeight);
    
    fill(max(70, 128-darkness),0,0); 
    rect(tree.x+140,tree.y-40,tree.trunkWidth,tree.trunkHeight);
    fill(0,max(80,144-darkness),48-darkness);
    ellipse(tree.x+153, tree.y-40, tree.canopyWidth, tree.canopyHeight);
    
    fill(max(70, 128-darkness),0,0); 
    rect(tree.x,tree.y,tree.trunkWidth,tree.trunkHeight);
    fill(0,max(80,144-darkness),48-darkness);
    ellipse(tree.x+13, tree.y, tree.canopyWidth, tree.canopyHeight);
    
    fill(max(70, 128-darkness),0,0); 
    rect(tree.x+500,tree.y+40,tree.trunkWidth,tree.trunkHeight);
    fill(0,max(80,144-darkness),48-darkness);
    ellipse(tree.x+513, tree.y+40, tree.canopyWidth, tree.canopyHeight);

	//TASK: make the scene dark by drawing a rectangle that covers the whole canvas.
	//Use the alpha value of fill to determine how dark to make it



}