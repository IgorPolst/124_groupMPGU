function setup()
{
	//create a large square canvas
	createCanvas(800, 800);
}

function draw()
{
	strokeWeight(3);
    fill(255, 0, 0);
	rect(200, 200, 400, 400);

    line(400,200,400,600); 
    line(200,400,600,400); 
    
    fill('pink');   arc(400,200,100,100,TWO_PI,PI,PIE);
    arc(400,600,100,100,PI,TWO_PI,PIE);
    arc(200,400,75,75,HALF_PI+PI,HALF_PI, PIE);
    arc(600,400,75,75,HALF_PI,PI+HALF_PI,PIE);
    
    fill(255, 200, 100);
    rect(335, 335, 130, 130); 
    
    line(600,200,200,600); 
    line(200,200,600,600); 
    
    fill(255,255,0);   arc(200,200,50,50,TWO_PI,HALF_PI,PIE);
    arc(600,600,50,50,PI,PI+ HALF_PI,PIE);
    arc(200,600,50,50,HALF_PI+PI, TWO_PI, PIE);
    arc(600,200,50,50,PI-HALF_PI,PI,PIE);
    
   fill('orange'); quad(280,280,520,280,510,290,290,290);
    quad(280,280,290,290,290,510,280,520);
    quad(290,510,510,510,520,520,280,520);
    quad(510,290,520,280,520,520,510,510);
    
    fill(255,255,255);
    ellipse(335,335,30,30);
    ellipse(465,335,30,30);
    ellipse(335,465,30,30);
    ellipse(465,465,30,30);
    
    fill(0,255,0);
    ellipse(400,400, 70,70);
    
    quad(480, 410, 500, 400, 480, 390, 450, 400);
    quad(320, 410, 350, 400, 320, 390, 300, 400);
    quad(410, 320, 400, 350, 390, 320, 400, 300);
    quad (410, 480, 400, 500, 390, 480, 400, 450);
    
    fill(0,0, 255);
    quad(400, 425, 425, 400, 400, 375, 375, 400);

}