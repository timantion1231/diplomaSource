const targetDolg; //долгота цели
const targetShir; //широта цели
//^ на вход поступает и не изеняется во время выполнения

double currDolg; //теущая долгота 
double currShir; //текщая широта

float currDirection; //текщий угол по компассу
float currWheelAngleDiscret; //текщий угол поворота колеса (рассчет из дискр значений) 
float currWheelAngleDeg; //ткущий угол поворота колеса в градусах

const maxWheelAngle; // максимальный угол поворота кослеса (влево)
const minWheelAngle; //минимальный угол поворота колеса (вправо)
const minDeltaWheelAngle;// минимально возможный угол поворота колеса

double targetDistance; //расстояние до цели
double courseAngleToTarget; // угол между курсом аппарата и цели
double wheelAngleToTarget; // угол между направлением колеса и целью

double currSpd; // текущая линейная скорость