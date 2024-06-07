//Hack it - we are the robot family

//TASK 1. modify the code so that all three robots are drawn
//TASK 2. try changing the numbers to create your robot family
//TASK 3. create more arrays and use the values in them to add more variation to the robots


var robotWidths;
var robotHeights;
var headWidths;
var colorsBody;
var colorsHead;
var colorsArms;
var colorsFood;


function setup() {
	//create a canvas for the robot
	createCanvas(2200, 700);
	robotWidths = [70, 100, 140, 110, 160, 150, 50, 100];
	robotHeights = [50, 120, 110, 100, 80, 90, 130, 40];
	headWidths = [0.7, 1, 0.9, 0.8,1.3,1.1,0.4,1.6];
	colorsBody = ["PowderBlue", "DarkSalmon", "DarkOrange","DarkOrchid","DeepSkyBlue","ForestGreen","GoldenRod",'IndianRed'];
	colorsHead = ["AliceBlue", "Bisque",'LightSalmon','Plum','PowderBlue','PaleGreen','LightYellow','MistyRose'];
	colorsArms = ['RoyalBlue','Sienna','Wheat','SteelBlue','Teal','SeaGreen','Yellow','Violet'];
	colorsFood = ['DarkBlue','Lime','Red','Navy','DarkSlateGrey','OliveDrab','SlateGrey','Indigo'];
}

function draw() {
	strokeWeight(2);
	translate(0, 600);
	

	//ROBOT 1
	for (var i = 0; i < 8; i++) {
		translate(250, 0);
		fill(colorsBody[i]);
		rect(-robotWidths[i] / 2, -robotHeights[i] - 130, robotWidths[i], 130);
		fill(colorsArms[i]);
		rect(-70, -robotHeights[i] - 130, 30, 100);
		rect(40, -robotHeights[i] - 130, 30, 100);
		fill(colorsFood[i]);
		rect(-30, -robotHeights[i], 30, robotHeights[i]);
		rect(0, -robotHeights[i], 30, robotHeights[i]);

		//robot heads
		fill(colorsHead[i]);
		rect(-50 * headWidths[i], -robotHeights[i] - 230, 100 * headWidths[i], 100, 10);

		//ears
		fill(255, 0, 0);
		rect(-50 * headWidths[i] - 10, -robotHeights[i] - 200, 10, 33);
		rect(50 * headWidths[i], -robotHeights[i] - 200, 10, 33);

		//robots' antennas
		fill(250, 250, 0);
		ellipse(0, -robotHeights[i] - 237, 10, 10);
		fill(200, 0, 200);
		rect(-10, -robotHeights[i] - 233, 20, 10);

		//robot's eyes
		fill(255)
		ellipse(-25 * headWidths[i], -robotHeights[i] - 200, 26 * headWidths[i], 26 * headWidths[i]);
		point(-25 * headWidths[i], -robotHeights[i] - 200);
		ellipse(25 * headWidths[i], -robotHeights[i] - 200, 26 * headWidths[i], 26 * headWidths[i]);
		point(25 * headWidths[i], -robotHeights[i] - 200);

		//robots' nose
		fill(255, 0, 0);
		triangle(0, -robotHeights[i] - 190, -15, -robotHeights[i] - 170, 15, -robotHeights[i] - 170);

		//robot mouth
		noFill();
		beginShape();
		vertex(-23, -robotHeights[i] - 155);
		vertex(-15, -robotHeights[i] - 145);
		vertex(-9, -robotHeights[i] - 155);
		vertex(-1, -robotHeights[i] - 145);
		vertex(7, -robotHeights[i] - 155);
		vertex(15, -robotHeights[i] - 145);
		vertex(23, -robotHeights[i] - 155);
		endShape();
	}



}
