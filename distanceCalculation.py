import math
def calculate_distance(ap_lat, ap_lon, target_lat, target_lon):
    # Переводим координаты в радианы
    ap_lat_rad = math.radians(ap_lat)
    ap_lon_rad = math.radians(ap_lon)
    target_lat_rad = math.radians(target_lat)
    target_lon_rad = math.radians(target_lon)
    
    # Вычисляем расстояние между точками
    delta_lon = target_lon_rad - ap_lon_rad
    delta_lat = target_lat_rad - ap_lat_rad
    a = math.sin(delta_lat / 2) ** 2 + math.cos(ap_lat_rad) * math.cos(target_lat_rad) * math.sin(delta_lon / 2) ** 2
    c = 2 * math.atan2(math.sqrt(a), math.sqrt(1 - a))
    distance = 6371 * c
    
    return distance

ap_lat = 56.74189484698186 
ap_lon = 37.22597119294313
target_lat = 56.74140060308283
target_lon = 37.22591754876223
print(calculate_distance(ap_lat, ap_lon, target_lat, target_lon))
