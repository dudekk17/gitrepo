function setup() {
 createCanvas(800, 600, WEBGL);
}

function draw() {
	fill('#FF00E5')
  //ellipse(400, 400, 100, 100);
strokeWeight(10);

stroke('blue');
circle(200, 200, 200);

stroke('black');
circle(430, 200, 200);

stroke('red');
circle(660, 200, 200);

stroke('yellow');
circle(315, 320, 200);

stroke('green');
circle(545, 320, 200);

noFill();

  // background(205, 102, 94);
  // rotateX(frameCount * 0.01);
  // rotateY(frameCount * 0.01);
  // torus(30, 15);

}