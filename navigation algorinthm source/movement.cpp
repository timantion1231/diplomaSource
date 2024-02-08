double calcDistance(double currShir, currDolg, targetShir, targetDolg){//расстояние до цели в метрах
    const earthRadius = 6371000//разиус земли в метрах
    //координаты в радианы
    currShirRad = math.radians(currShir);
    currDolgRad = math.radians(currDolg);
    targetShirRad = math.radians(targetShir);
    targetDolgRad = math.radians(targetDolg);

    //расстояние между точками
    double deltaDolg = targetDolgRad - currDolgRad;
    double deltaShir = targetShirRad - currShirRad;

    double a = math.sin(deltaShir/2)**2 + math.cos(currShirRad)*math.cos(targetShirRad)*math.sin(deltaDolg/2)**2;
    double c = 2*math.atan2(math.sqrt(a), math.sqrt(1-a))

    return earthRadius*c
}
