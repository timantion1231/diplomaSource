//переделать, может быть сделать многопоточность
void start(){
    targetDolg = outside.getTargetDolg();
    targetShir = outside.getTargetShir();
}

void loop(){
    currDirection = outside.getCurrentAngle();
    currDolg = outside.getCurrentDolg();
    currShir = outside.getCurrentShir();
}

void main(){
    start();
    while(true) loop();

}