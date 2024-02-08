double calcRotationAngle(currShir, currDolg, targetShir, targetDolg, currDirection)//угол отклонения курса от цели
{
    double rotationAngle;
    double angleRad;
    //перевод координат в радианы
    currShirRad = math.radians(currShir);
    currDolgRad = math.radians(currDolg);

    targetShirRad = math.radians(targetShir);
    targetDolgRad = math.radians(targetDolg);

    //разница между долготами и широтами
    deltaShir = targetShirRad - currShirRad;
    deltaDolg = targetDolgRad - targetShirRad;

    //угол между направлением аппарата и целью
    angleRad = math.atan2(deltaShir, deltaDolg);

    //угол поворота аппарата
    rotationAngle = math.degrees(angleRad) - currDirection;

    //направление поворота
    if(rotationAngle>0)//left
    else //right

    return rotationAngle
}

double calcCurrWheelAngle(float currWheelAngleDiscret){ // перевод дискреного значения поворота колеса от курса в углы
    calculations...
    return currWheelAngleDeg
}

bool isMovmentToTurnNeeded(float maxWheelAngle, minWheelAngle, courseAngleToTarget){ // необходимость движения для поворота к цели

    if(courseAngleToTarget>0)
        if(courseAngleToTarget>maxWheelAngle) return true;
        else return false;
    else
        if(courseAngleToTarget<minWheelAngle) return true;
        else return false;
}