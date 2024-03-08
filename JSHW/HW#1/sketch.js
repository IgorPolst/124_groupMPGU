function setup()
{
	//create a canvas for the robot
	createCanvas(600, 500);
}

function draw()
{
	strokeWeight(4);
    
    
    

	//robots head
	fill(160,190,215);
	rect(100, 100, 400, 300);


	//robots antenna
	fill(0, 0, 0);
	rect(250, 10, 120, 100);

	//robots eyes
	fill(255, 0, 0);
	arc(220, 150, 200, 150,340, 160, CHORD);
	arc(400, 185, 130, 100, 12, 160, CHORD);
    
    fill(255, 0, 0);
    rect(465,290, 10,110)
    
    fill(255, 0, 0);
    rect(435,290, 20,110)
    
    fill(255, 0, 0);
    rect(390,290, 20,110)


	//robots mouth
	fill(0,255,255);
	beginShape();
	vertex(110, 250);
	vertex(135, 300);
	vertex(170, 270);
	vertex(200, 330);
	vertex(245, 290);
	vertex(280, 360);
	vertex(320, 300);
    vertex(350, 355);
    vertex(380, 300);
    vertex(410, 340);
    vertex(440, 290);
    vertex(460, 330);
    vertex(490, 260);
	endShape();
    
    stroke(0, 100,100)
}