var map;
var pirateFont;
var treasureX;
var treasureY;
var message = "Pieces-o-nothing!";
var counter;
var stage;
var distance;
var button;
var point;
var gameChar_x = 0;
var gameChar_y = 0;

function setup() {
	button = {
        X: 350,
        Y: 330,
        Width: 100,
        Height: 50
    };
	
	createCanvas(800, 600);
	map = loadImage("map.jpg");

	treasureX = random(230, 500);
	treasureY = random(100, 330);

	point = {
        X: treasureX,
        Y: treasureY,
        radius: 15
	};
	pirateFont = loadFont("bsg.ttf");
	textFont(pirateFont);
	
	counter = 0;
	stage = 0;
}



function draw()
{

	fill(0);
	image(map, 0, 0, width, height);

	textSize(40);
	textAlign(CENTER, CENTER);
	
	gameChar_x = mouseX;
	gameChar_y = mouseY-55;
	
	if (stage == 0) {
		text("You need to find the treasure in 5 attempts", 400,240)
		text("Plese press the button",400, 280);
		distance = Math.sqrt((button.X+50-mouseX)**2+(button.Y+25-mouseY)**2)
		fill(distance, 255-distance, 0);
    	rect(button.X, button.Y, button.Width, button.Height, 10);
		fill(0,0,0)
		textSize(20);
		text ("START", button.X+50,button.Y+27);
	}
	else if (stage == 1 && counter < 5){
	textAlign(LEFT);
	textSize(40);
	distance = Math.sqrt((treasureX-mouseX)**2+(treasureY-mouseY)**2)
	text("You've found " + message, 30, 550);
	text("You have " + (5 - counter) +" attempts left", 30, 500);
	fill(distance, 255-distance, 0);
	ellipse(mouseX, mouseY, 10,10);
		
	//Add your code here ...
	fill("blue");
	rect(gameChar_x-9, gameChar_y+8, 20, 30);
	fill("pink");
	ellipse(gameChar_x, gameChar_y, 30);
	fill("brown");
	rect(gameChar_x+3, gameChar_y+35, 10,10);
	rect(gameChar_x-12, gameChar_y+35, 10,10);
	}
	else if (stage == 4) {
	text("X", treasureX, treasureY);
	text("You win!", 650, 100);
		
	}
	else if (stage == 3){
		textSize(30);
		text("You were eaten by crocodiles",650,100)
	}
	else if (stage == 5 || counter >= 5){
		text("You died", 650,100);
	}
	
}



function mousePressed(){
	if (mouseX > button.X && mouseX < button.X + button.Width && mouseY > button.Y && mouseY < button.Y + button.Height) {
		stage = 1;
	}
	else if (counter < 5 && stage == 1){
		counter ++;
		 if (dist(mouseX, mouseY, point.X, point.Y) <= point.radius) 
		{
			stage = 4;
		}
//		else if ( mouseX < 500  ){
//			stage = 3;		
//		}
	
	}
	else if (counter >= 5){
		stage = 5;
	}
	else if (stage == 4 || stage == 5 || stage == 3){
		counter = 0;
		stage = 0;
	}
}