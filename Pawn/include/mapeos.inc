#include <a_samp>
#include <sscanf2>
#define FILTERSCRIPT

#pragma tabsize 0

new MAX_OBJECT_FIJOS;

#define MAX_RADIO_STREAM			(500)
#define MAX_RADIO_STREAM_MIN		(250)

forward RemoveBuildingForPlayerEx(playerid);

public RemoveBuildingForPlayerEx(playerid) // total: 135
{
	//LAWRENCE
	RemoveBuildingForPlayer(playerid, 713, 1304.770, -1729.939, 12.437, 0.250);
	RemoveBuildingForPlayer(playerid, 713, 1304.770, -1753.589, 12.437, 0.250);
	RemoveBuildingForPlayer(playerid, 713, 1304.770, -1780.109, 12.437, 0.250);
	RemoveBuildingForPlayer(playerid, 713, 1304.770, -1808.489, 12.437, 0.250);
	RemoveBuildingForPlayer(playerid, 713, 1304.770, -1839.869, 12.437, 0.250);
	RemoveBuildingForPlayer(playerid, 615, 1302.339, -1507.160, 12.546, 0.250);
	RemoveBuildingForPlayer(playerid, 615, 1311.979, -1491.910, 12.546, 0.250);
	RemoveBuildingForPlayer(playerid, 615, 1323.869, -1467.709, 12.546, 0.250);
	
	//PIZZA HANDA
	RemoveBuildingForPlayer(playerid, 5530, 2112.937, -1797.093, 19.335, 0.250);
	RemoveBuildingForPlayer(playerid, 5418, 2112.937, -1797.093, 19.335, 0.250);

	//gasomarket
	RemoveBuildingForPlayer(playerid, 6073, 1003.8906, -1598.0391, 17.8438, 0.25);
	RemoveBuildingForPlayer(playerid, 6036, 1003.8906, -1598.0391, 17.8438, 0.25);
	RemoveBuildingForPlayer(playerid, 1297, 1019.2344, -1577.1016, 15.9375, 0.25);
	//gasolinera
	RemoveBuildingForPlayer(playerid, 1283, 1311.2734, -1746.1172, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1345.7656, -1740.6172, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1335.1953, -1731.7813, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1357.5156, -1732.9375, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1388.3594, -1745.4453, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1441.8594, -1733.0078, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1513.2344, -1732.9219, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1545.7656, -1731.6719, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1700.8516, -1778.3984, 12.4922, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1688.8672, -1745.4688, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1690.2109, -1718.5781, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1736.5313, -1731.7969, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1711.5625, -1703.8203, 12.9922, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1930.3750, -1753.1016, 15.5938, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1990.6094, -1752.8438, 15.5859, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2013.2891, -1751.7656, 15.5859, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2093.5313, -1744.5938, 15.6172, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1354.9063, -1291.3906, 15.4922, 0.25);
	//estacionamiento GOB
	RemoveBuildingForPlayer(playerid, 1265, 1465.4766, -1848.2500, 12.9922, 0.25);
	RemoveBuildingForPlayer(playerid, 1372, 1466.9453, -1847.8438, 12.6641, 0.25);
	RemoveBuildingForPlayer(playerid, 1372, 1419.7344, -1846.5469, 12.6641, 0.25);
	RemoveBuildingForPlayer(playerid, 1265, 1420.4297, -1845.3438, 12.9844, 0.25);
	RemoveBuildingForPlayer(playerid, 1372, 1419.6953, -1844.2031, 12.6641, 0.25);
	RemoveBuildingForPlayer(playerid, 1220, 1420.4922, -1842.4375, 12.9297, 0.25);
	RemoveBuildingForPlayer(playerid, 1220, 1419.7266, -1842.8516, 12.9297, 0.25);
	RemoveBuildingForPlayer(playerid, 1230, 1419.6719, -1842.0313, 12.9766, 0.25);
	RemoveBuildingForPlayer(playerid, 4170, 1433.9531, -1844.4063, 21.4219, 0.25);
	RemoveBuildingForPlayer(playerid, 1357, 1487.6953, -1848.1094, 12.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 1372, 1486.2109, -1848.1250, 12.6641, 0.25);
	RemoveBuildingForPlayer(playerid, 1372, 1468.0625, -1847.7891, 12.6641, 0.25);
	RemoveBuildingForPlayer(playerid, 1230, 1488.9219, -1848.2734, 12.9766, 0.25);
	RemoveBuildingForPlayer(playerid, 1265, 1515.3828, -1850.0547, 12.9844, 0.25);
	RemoveBuildingForPlayer(playerid, 1265, 1514.4219, -1850.0391, 12.9922, 0.25);
	RemoveBuildingForPlayer(playerid, 1372, 1516.6875, -1850.0547, 12.6641, 0.25);
	RemoveBuildingForPlayer(playerid, 1372, 1538.9453, -1849.2734, 12.6641, 0.25);
	RemoveBuildingForPlayer(playerid, 1230, 1538.8359, -1847.6250, 13.6719, 0.25);
	RemoveBuildingForPlayer(playerid, 1220, 1538.3906, -1847.9297, 12.9297, 0.25);
	RemoveBuildingForPlayer(playerid, 1220, 1539.1016, -1847.2969, 12.9297, 0.25);

	//sata
	RemoveBuildingForPlayer(playerid, 5011, 1874.2109, -2286.5313, 17.9297, 0.25);
	RemoveBuildingForPlayer(playerid, 3672, 1921.6406, -2206.3906, 18.8828, 0.25);
	RemoveBuildingForPlayer(playerid, 3672, 2030.0547, -2249.0234, 18.8828, 0.25);
	RemoveBuildingForPlayer(playerid, 3672, 2030.0547, -2315.4297, 18.8828, 0.25);
	RemoveBuildingForPlayer(playerid, 3769, 1961.4453, -2216.1719, 14.9844, 0.25);
	RemoveBuildingForPlayer(playerid, 3744, 2061.5313, -2209.8125, 14.9766, 0.25);
	RemoveBuildingForPlayer(playerid, 3744, 2082.4063, -2269.6563, 14.9609, 0.25);
	RemoveBuildingForPlayer(playerid, 3744, 2082.4375, -2298.2266, 14.9609, 0.25);
	RemoveBuildingForPlayer(playerid, 3769, 2060.6875, -2305.9609, 14.9844, 0.25);
	RemoveBuildingForPlayer(playerid, 5006, 1874.2109, -2286.5313, 17.9297, 0.25);
	RemoveBuildingForPlayer(playerid, 1290, 1899.4219, -2328.1406, 18.4766, 0.25);
	RemoveBuildingForPlayer(playerid, 1290, 1899.4219, -2244.5078, 18.4766, 0.25);
	RemoveBuildingForPlayer(playerid, 1215, 1983.8594, -2281.7109, 13.0625, 0.25);
	RemoveBuildingForPlayer(playerid, 3664, 1960.6953, -2236.4297, 19.2813, 0.25);
	RemoveBuildingForPlayer(playerid, 1290, 2003.4531, -2281.3984, 18.3828, 0.25);
	RemoveBuildingForPlayer(playerid, 5031, 2037.0469, -2313.5469, 18.7109, 0.25);
	RemoveBuildingForPlayer(playerid, 3629, 2030.0547, -2315.4297, 18.8828, 0.25);
	RemoveBuildingForPlayer(playerid, 3629, 2030.0547, -2249.0234, 18.8828, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 2057.0547, -2315.4688, 12.7422, 0.25);
	RemoveBuildingForPlayer(playerid, 3625, 2060.6875, -2305.9609, 14.9844, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 2057.5391, -2270.0703, 12.7500, 0.25);
	RemoveBuildingForPlayer(playerid, 3574, 2082.4063, -2269.6563, 14.9609, 0.25);
	RemoveBuildingForPlayer(playerid, 3574, 2082.4375, -2298.2266, 14.9609, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 2089.7813, -2244.4922, 12.7500, 0.25);
	RemoveBuildingForPlayer(playerid, 3629, 1921.6406, -2206.3906, 18.8828, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 1949.3438, -2227.5156, 13.6563, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 1944.0625, -2227.5156, 13.6563, 0.25);
	RemoveBuildingForPlayer(playerid, 1290, 1951.0313, -2207.7031, 18.4219, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 1954.6172, -2227.4844, 13.6875, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 1965.1719, -2227.4141, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 1959.8984, -2227.4453, 13.7266, 0.25);
	RemoveBuildingForPlayer(playerid, 3625, 1961.4453, -2216.1719, 14.9844, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 1975.7266, -2227.4141, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 1970.4453, -2227.4141, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 1290, 1979.6797, -2207.8438, 18.4219, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 1981.0000, -2227.4141, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 1996.8281, -2227.3828, 13.7891, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 1991.5547, -2227.4141, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 1986.2813, -2227.4141, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1983.8047, -2224.1641, 12.7500, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 2002.1094, -2227.3438, 13.8281, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 2018.0313, -2224.1641, 12.7500, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 2055.0547, -2224.3828, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 2055.0547, -2219.1094, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 2056.8281, -2224.1641, 12.7500, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 2054.9844, -2213.7891, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 2054.9219, -2208.4609, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 2054.9219, -2203.1875, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 3574, 2061.5313, -2209.8125, 14.9766, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 2054.9297, -2181.3594, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 2054.9297, -2186.6328, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 3573, 1798.6484, -2057.9141, 14.9844, 0.25);

	//fd idlewood
	RemoveBuildingForPlayer(playerid, 5208, 2115.0000, -1921.5234, 15.3906, 0.25);
	RemoveBuildingForPlayer(playerid, 1226, 2118.2891, -1939.3984, 16.3906, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2114.5547, -1928.1875, 5.0313, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2113.3984, -1925.0391, 10.8047, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2115.6719, -1922.7656, 10.8047, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2123.3594, -1928.0703, 6.8438, 0.25);
	RemoveBuildingForPlayer(playerid, 5182, 2115.0000, -1921.5234, 15.3906, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2122.6563, -1916.7891, 10.8047, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2116.9297, -1916.0781, 10.8047, 0.25);
	RemoveBuildingForPlayer(playerid, 5231, 2085.2813, -1909.7109, 23.0000, 0.25);
	RemoveBuildingForPlayer(playerid, 5374, 2085.2813, -1909.7109, 23.0000, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2121.5078, -1909.5313, 10.8047, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2110.2734, -1906.5859, 5.0313, 0.25);
	RemoveBuildingForPlayer(playerid, 1226, 2134.6016, -1900.4063, 16.3906, 0.25);

	//conce interior
	RemoveBuildingForPlayer(playerid, 760, 2521.699, -1653.040, 13.210, 0.250);
	RemoveBuildingForPlayer(playerid, 14795, 1388.880, -20.882, 1005.200, 0.250);

	//Remove Buildings - PF EXTERIOR - 0/0
	RemoveBuildingForPlayer(playerid, 16090, 315.773, 1431.089, 5.273, 0.250);
	RemoveBuildingForPlayer(playerid, 16091, 289.742, 1431.089, 5.273, 0.250);
	RemoveBuildingForPlayer(playerid, 16089, 342.125, 1431.089, 5.273, 0.250);
	RemoveBuildingForPlayer(playerid, 16087, 358.679, 1430.449, 11.617, 0.250);
	RemoveBuildingForPlayer(playerid, 16088, 368.429, 1431.089, 5.273, 0.250);
	RemoveBuildingForPlayer(playerid, 16092, 394.156, 1431.089, 5.273, 0.250);
	RemoveBuildingForPlayer(playerid, 3426, 419.445, 1411.880, 6.765, 0.250);
	RemoveBuildingForPlayer(playerid, 3428, 419.445, 1411.880, 6.765, 0.250);
	RemoveBuildingForPlayer(playerid, 3255, 246.563, 1410.540, 9.687, 0.250);
	RemoveBuildingForPlayer(playerid, 3291, 246.563, 1410.540, 9.687, 0.250);
	RemoveBuildingForPlayer(playerid, 3255, 246.563, 1385.890, 9.687, 0.250);
	RemoveBuildingForPlayer(playerid, 3291, 246.563, 1385.890, 9.687, 0.250);
	RemoveBuildingForPlayer(playerid, 3255, 246.563, 1435.199, 9.687, 0.250);
	RemoveBuildingForPlayer(playerid, 3291, 246.563, 1435.199, 9.687, 0.250);
	RemoveBuildingForPlayer(playerid, 3259, 262.507, 1465.199, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3424, 262.507, 1465.199, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 253.820, 1458.109, 10.117, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 253.820, 1456.130, 16.296, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 255.531, 1472.979, 19.757, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 254.679, 1468.209, 18.296, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 254.679, 1464.630, 22.468, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 252.125, 1473.890, 16.296, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 252.813, 1473.829, 11.406, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 255.531, 1454.550, 19.148, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 253.820, 1458.109, 23.781, 0.250);
	RemoveBuildingForPlayer(playerid, 3673, 247.929, 1461.859, 33.414, 0.250);
	RemoveBuildingForPlayer(playerid, 3682, 247.929, 1461.859, 33.414, 0.250);
	RemoveBuildingForPlayer(playerid, 3674, 247.554, 1471.089, 35.898, 0.250);
	RemoveBuildingForPlayer(playerid, 3258, 222.507, 1444.699, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3289, 222.507, 1444.699, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3259, 210.414, 1444.839, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3424, 210.414, 1444.839, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 16086, 232.289, 1434.479, 13.500, 0.250);
	RemoveBuildingForPlayer(playerid, 3257, 223.179, 1421.189, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3288, 223.179, 1421.189, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3258, 212.078, 1426.030, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3289, 212.078, 1426.030, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 204.641, 1409.849, 11.406, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 203.953, 1409.910, 16.296, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 205.647, 1394.130, 10.117, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 206.507, 1404.229, 18.296, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 205.647, 1392.160, 16.296, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 207.358, 1390.569, 19.148, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 205.647, 1394.130, 23.781, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 206.507, 1400.660, 22.468, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 206.507, 1387.849, 27.492, 0.250);
	RemoveBuildingForPlayer(playerid, 3673, 199.757, 1397.880, 33.414, 0.250);
	RemoveBuildingForPlayer(playerid, 3682, 199.757, 1397.880, 33.414, 0.250);
	RemoveBuildingForPlayer(playerid, 3674, 199.382, 1407.119, 35.898, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 254.679, 1451.829, 27.492, 0.250);
	RemoveBuildingForPlayer(playerid, 3255, 246.563, 1361.239, 9.687, 0.250);
	RemoveBuildingForPlayer(playerid, 3291, 246.563, 1361.239, 9.687, 0.250);
	RemoveBuildingForPlayer(playerid, 3257, 221.570, 1374.969, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3288, 221.570, 1374.969, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3259, 220.647, 1355.189, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3424, 220.647, 1355.189, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3258, 207.539, 1371.239, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3289, 207.539, 1371.239, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3258, 221.179, 1390.300, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3289, 221.179, 1390.300, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3259, 221.703, 1404.510, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3424, 221.703, 1404.510, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 196.022, 1462.020, 10.117, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 199.585, 1463.729, 19.148, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 181.156, 1463.729, 19.757, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 196.022, 1462.020, 23.781, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 198.000, 1462.020, 16.296, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 189.500, 1462.880, 22.468, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 185.921, 1462.880, 18.296, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 180.242, 1460.319, 16.296, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 180.304, 1461.010, 11.406, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 202.304, 1462.880, 27.492, 0.250);
	RemoveBuildingForPlayer(playerid, 3674, 183.039, 1455.750, 35.898, 0.250);
	RemoveBuildingForPlayer(playerid, 3673, 192.272, 1456.130, 33.414, 0.250);
	RemoveBuildingForPlayer(playerid, 3682, 192.272, 1456.130, 33.414, 0.250);
	RemoveBuildingForPlayer(playerid, 3256, 218.257, 1467.540, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3290, 218.257, 1467.540, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3258, 183.742, 1444.869, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3289, 183.742, 1444.869, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3256, 190.914, 1371.770, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3290, 190.914, 1371.770, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3636, 166.789, 1356.989, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3683, 166.789, 1356.989, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3636, 166.789, 1392.160, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3683, 166.789, 1392.160, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3636, 133.742, 1392.160, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3683, 133.742, 1392.160, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 16392, 150.078, 1378.339, 11.843, 0.250);
	RemoveBuildingForPlayer(playerid, 3636, 133.742, 1356.989, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3683, 133.742, 1356.989, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3636, 133.742, 1426.910, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3683, 133.742, 1426.910, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3636, 133.742, 1459.640, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3683, 133.742, 1459.640, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3636, 166.789, 1426.910, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3683, 166.789, 1426.910, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 16394, 238.272, 1452.939, 11.835, 0.250);
	RemoveBuildingForPlayer(playerid, 16393, 149.375, 1452.939, 11.851, 0.250);
	RemoveBuildingForPlayer(playerid, 16392, 150.078, 1378.339, 11.843, 0.250);
	RemoveBuildingForPlayer(playerid, 16391, 239.296, 1367.989, 11.835, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 207.358, 1409.000, 19.757, 0.250);
	//continuar
	RemoveBuildingForPlayer(playerid, 3562, 2232.3984, -1464.7969, 25.6484, 0.25);
	RemoveBuildingForPlayer(playerid, 3562, 2247.5313, -1464.7969, 25.5469, 0.25);
	RemoveBuildingForPlayer(playerid, 3562, 2263.7188, -1464.7969, 25.4375, 0.25);
	RemoveBuildingForPlayer(playerid, 3562, 2243.7109, -1401.7813, 25.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 3562, 2230.6094, -1401.7813, 25.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 3562, 2256.6641, -1401.7813, 25.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 713, 2275.3906, -1438.6641, 22.5547, 0.25);
	RemoveBuildingForPlayer(playerid, 3582, 2230.6094, -1401.7813, 25.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 3582, 2243.7109, -1401.7813, 25.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 645, 2237.5313, -1395.4844, 23.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 3582, 2256.6641, -1401.7813, 25.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 1224, 2224.8438, -1229.5938, 23.5625, 0.25);
	RemoveBuildingForPlayer(playerid, 1221, 2227.3594, -1230.1797, 23.4063, 0.25);
	RemoveBuildingForPlayer(playerid, 1221, 2225.4688, -1231.1406, 23.4063, 0.25);
	RemoveBuildingForPlayer(playerid, 1221, 2222.8750, -1229.4219, 23.4063, 0.25);
	RemoveBuildingForPlayer(playerid, 645, 2239.5703, -1468.8047, 22.6875, 0.25);
	RemoveBuildingForPlayer(playerid, 3582, 2232.3984, -1464.7969, 25.6484, 0.25);
	RemoveBuildingForPlayer(playerid, 3582, 2247.5313, -1464.7969, 25.5469, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2267.4688, -1470.1953, 21.7188, 0.25);
	RemoveBuildingForPlayer(playerid, 3582, 2263.7188, -1464.7969, 25.4375, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2471.6719, -1428.1328, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2490.6953, -1428.1328, 30.5156, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2490.6953, -1413.8984, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2471.6719, -1413.8984, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2490.6953, -1395.2656, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2471.6719, -1395.2656, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2490.6953, -1379.8281, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2471.6719, -1379.8281, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2490.6953, -1362.6563, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2471.6719, -1362.6563, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2471.6719, -1428.1328, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2471.6719, -1413.8984, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2471.6719, -1395.2656, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2471.6719, -1379.8281, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2490.6953, -1428.1328, 30.5156, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2490.6953, -1413.8984, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2490.6953, -1395.2656, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2490.6953, -1379.8281, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2471.6719, -1362.6563, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2490.6953, -1362.6563, 30.8125, 0.25);

    //pressban /entrenar
    RemoveBuildingForPlayer(playerid, 2631, 772.9922, 5.3828, 999.7266, 0.25);

	//PEAJE LV-LS / 121 objetos
	RemoveBuildingForPlayer(playerid, 620, 2889.5234, -692.9141, 9.4844, 0.25);

	//PEAJE SF-PUEBLOS / 19 objetos / EdinsonWalker
	RemoveBuildingForPlayer(playerid, 9868, -2681.3516, 1274.6094, 57.4219, 0.25);
	RemoveBuildingForPlayer(playerid, 9623, -2681.3516, 1274.6094, 57.4219, 0.25);

	//arreglo bug del bar dillimore - 3
	RemoveBuildingForPlayer(playerid, 14650, 681.4766, -456.4141, -24.5625, 0.25);
	RemoveBuildingForPlayer(playerid, 14653, 681.4453, -455.1719, -25.9453, 0.25);
	RemoveBuildingForPlayer(playerid, 14654, 681.4531, -457.6172, -23.7969, 0.25);

	//portones pay'n'spray y garajes bomba - 18objs
	RemoveBuildingForPlayer(playerid, 5043, 1843.3672, -1856.3203, 13.8750, 0.25);
	RemoveBuildingForPlayer(playerid, 5340, 2644.8594, -2039.2344, 14.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 5422, 2071.4766, -1831.4219, 14.5625, 0.25);
	RemoveBuildingForPlayer(playerid, 5856, 1024.9844, -1029.3516, 33.1953, 0.25);
	RemoveBuildingForPlayer(playerid, 5779, 1041.3516, -1025.9297, 32.6719, 0.25);
	RemoveBuildingForPlayer(playerid, 6400, 488.2813, -1734.6953, 12.3906, 0.25);
	RemoveBuildingForPlayer(playerid, 10575, -2716.3516, 217.4766, 5.3828, 0.25);
	RemoveBuildingForPlayer(playerid, 11313, -1935.8594, 239.5313, 35.3516, 0.25);
	RemoveBuildingForPlayer(playerid, 11319, -1904.5313, 277.8984, 42.9531, 0.25);
	RemoveBuildingForPlayer(playerid, 9625, -2425.7266, 1027.9922, 52.2813, 0.25);
	RemoveBuildingForPlayer(playerid, 9093, 2386.6563, 1043.6016, 11.5938, 0.25);
	RemoveBuildingForPlayer(playerid, 8957, 2393.7656, 1483.6875, 12.7109, 0.25);
	RemoveBuildingForPlayer(playerid, 7707, 2006.0000, 2317.6016, 11.3125, 0.25);
	RemoveBuildingForPlayer(playerid, 7709, 2006.0000, 2303.7266, 11.3125, 0.25);
	RemoveBuildingForPlayer(playerid, 7891, 1968.7422, 2162.4922, 12.0938, 0.25);
	RemoveBuildingForPlayer(playerid, 3294, -1420.5469, 2591.1563, 57.7422, 0.25);
	RemoveBuildingForPlayer(playerid, 3294, -100.0000, 1111.4141, 21.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 13028, 720.0156, -462.5234, 16.8594, 0.25);

	//ferreteria - 19
	RemoveBuildingForPlayer(playerid, 2358, 285.6328, -112.7344, 1000.8906, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 284.8203, -112.6250, 1001.1328, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 284.7656, -112.6016, 1000.8906, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 284.8047, -112.6172, 1000.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 285.6719, -112.7344, 1000.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 285.6875, -112.7344, 1001.1328, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 286.5469, -112.7266, 1000.8906, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 286.5078, -112.7344, 1000.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 286.5938, -112.7422, 1001.1328, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 284.0703, -112.4531, 1000.8906, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 284.0781, -112.4922, 1000.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 284.0781, -112.5078, 1001.1328, 0.25);
	RemoveBuildingForPlayer(playerid, 2359, 284.4141, -111.9141, 1000.7344, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 287.3438, -112.7266, 1000.8906, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 287.3125, -112.7422, 1000.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 287.3984, -112.7266, 1001.1328, 0.25);
	RemoveBuildingForPlayer(playerid, 2619, 295.4063, -112.6875, 1003.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 18044, 287.8672, -109.9922, 1002.2344, 0.25);
	RemoveBuildingForPlayer(playerid, 18048, 290.2266, -105.3203, 1000.9922, 0.25);

	//stake park - 15
	RemoveBuildingForPlayer(playerid, 5466, 1881.7969, -1315.5391, 37.9453, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1837.1328, -1369.9844, 12.7500, 0.25);
	RemoveBuildingForPlayer(playerid, 5400, 1913.1328, -1370.5000, 17.7734, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1926.0313, -1350.5469, 16.2031, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1876.9219, -1350.6875, 12.8672, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1861.7422, -1330.8906, 12.8672, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1861.7891, -1305.2109, 12.8672, 0.25);
	RemoveBuildingForPlayer(playerid, 5463, 1881.7969, -1315.5391, 37.9453, 0.25);
	RemoveBuildingForPlayer(playerid, 5644, 1881.8203, -1315.9219, 30.8359, 0.25);
	RemoveBuildingForPlayer(playerid, 5464, 1902.4297, -1309.5391, 29.9141, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1967.0859, -1331.0469, 23.1641, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1836.7500, -1271.0078, 12.6875, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1946.2266, -1270.7656, 19.8047, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1861.7891, -1251.0078, 12.7031, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1908.9766, -1251.0156, 12.6094, 0.25);
	//surtidores explosivos - 2
	RemoveBuildingForPlayer(playerid, 1676, 0.0, 0.0, 0.0, 6000.0);
	RemoveBuildingForPlayer(playerid, 1686, 0.0, 0.0, 0.0, 6000.0);
	//teléfonos públicos - 2
	RemoveBuildingForPlayer(playerid, 1216, 0.0, 0.0, 0.0, 6000.0);
	RemoveBuildingForPlayer(playerid, 1363, 0.0, 0.0, 0.0, 6000.0);
	//graffitis
	RemoveBuildingForPlayer(playerid, 1524, 0.0, 0.0, 0.0, 6000.0);
	RemoveBuildingForPlayer(playerid, 1525, 0.0, 0.0, 0.0, 6000.0);
	RemoveBuildingForPlayer(playerid, 1526, 0.0, 0.0, 0.0, 6000.0);
	RemoveBuildingForPlayer(playerid, 1527, 0.0, 0.0, 0.0, 6000.0);
	RemoveBuildingForPlayer(playerid, 1528, 0.0, 0.0, 0.0, 6000.0);
	RemoveBuildingForPlayer(playerid, 1529, 0.0, 0.0, 0.0, 6000.0);
	RemoveBuildingForPlayer(playerid, 1530, 0.0, 0.0, 0.0, 6000.0);
	RemoveBuildingForPlayer(playerid, 1531, 0.0, 0.0, 0.0, 6000.0);
	
	//deposito - 11
	RemoveBuildingForPlayer(playerid, 1278, -533.5391, -559.6953, 38.5469, 0.25);
	RemoveBuildingForPlayer(playerid, 1415, -541.4297, -561.2266, 24.5859, 0.25);
	RemoveBuildingForPlayer(playerid, 1415, -513.7578, -561.0078, 24.5859, 0.25);
	RemoveBuildingForPlayer(playerid, 1441, -503.6172, -540.5313, 25.2266, 0.25);
	RemoveBuildingForPlayer(playerid, 1441, -502.4063, -513.0156, 25.2266, 0.25);
	RemoveBuildingForPlayer(playerid, 1440, -553.6875, -481.6328, 25.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1441, -554.4531, -496.1797, 25.1641, 0.25);
	RemoveBuildingForPlayer(playerid, 1441, -537.0391, -469.1172, 25.2266, 0.25);
	RemoveBuildingForPlayer(playerid, 1440, -516.9453, -496.6484, 25.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1440, -503.1250, -509.0000, 25.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 17020, -475.9766, -544.8516, 28.1172, 0.25);
    // ——— leñador
	RemoveBuildingForPlayer(playerid, 1454, -574.3906, -1476.8203, 10.3828, 0.25);
	RemoveBuildingForPlayer(playerid, 1454, -577.3438, -1478.5703, 10.6563, 0.25);
	RemoveBuildingForPlayer(playerid, 1454, -580.2891, -1480.3125, 10.7422, 0.25);
	RemoveBuildingForPlayer(playerid, 17457, -570.7344, -1490.3203, 15.0703, 0.25);
	RemoveBuildingForPlayer(playerid, 3286, -559.3047, -1486.3281, 12.8359, 0.25);
	RemoveBuildingForPlayer(playerid, 1454, -586.1953, -1483.7969, 11.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 1454, -584.1328, -1485.9844, 10.5781, 0.25);
	RemoveBuildingForPlayer(playerid, 1454, -583.2422, -1482.0547, 10.7969, 0.25);

	//semáforos
	RemoveBuildingForPlayer(playerid, 1283, 1442.9375, -1871.4219, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1518.8047, -1873.3828, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1311.2734, -1746.1172, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1345.7656, -1740.6172, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1325.7109, -1732.8281, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1335.1953, -1731.7813, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1357.5156, -1732.9375, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1414.4141, -1731.4297, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1530.8828, -1883.2344, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1539.9297, -1871.6406, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1690.0938, -1796.8516, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1762.7891, -1732.8281, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1736.5313, -1731.7969, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1744.4922, -1598.3359, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1753.4453, -1610.8281, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1765.0781, -1604.1875, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2410.7656, -1998.8047, 15.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2416.6641, -2020.9688, 15.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2425.0469, -2006.8438, 15.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2066.1641, -1329.9688, 26.0313, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2072.4531, -1351.8672, 26.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1964.0703, -1261.4453, 25.9609, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1987.3984, -1260.3828, 26.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1975.6484, -1249.5938, 26.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2066.3594, -1290.2578, 26.0078, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2072.3984, -1271.7031, 26.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2072.6172, -1232.4609, 26.0938, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2066.1406, -1210.5625, 26.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1958.7031, -1140.3438, 28.1250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1974.6875, -1146.8516, 28.0625, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1981.9141, -1131.4297, 28.0859, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1966.2031, -1124.6875, 28.0078, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1990.6094, -1752.8438, 15.5859, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2013.2891, -1751.7656, 15.5859, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2001.9219, -1683.6172, 15.5391, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2001.3594, -1665.5391, 15.5000, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2030.6875, -1612.9063, 15.6094, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2129.9453, -1397.0234, 26.0938, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2123.5703, -1384.0859, 25.9922, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2139.3047, -1383.5781, 26.0938, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2155.6875, -1384.9219, 26.2500, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2178.2422, -1383.9141, 26.2031, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2201.1797, -1385.0781, 26.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2224.1328, -1383.7813, 26.1484, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2282.3750, -1382.2734, 26.0938, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2270.0625, -1289.6875, 26.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2271.7734, -1311.8203, 26.0000, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2272.1484, -1231.4844, 26.0000, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2269.9844, -1209.3516, 26.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2070.2109, -1812.8828, 15.6016, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2080.9375, -1800.9453, 15.6172, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2082.2734, -1823.9141, 15.6016, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2082.0313, -1683.6719, 15.5000, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2081.2109, -1660.9453, 15.5391, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2070.1484, -1612.9219, 15.6094, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2083.8047, -1611.7500, 15.6094, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2103.8359, -1612.7266, 15.6016, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2092.9922, -1604.1563, 15.6016, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2848.0469, -1664.0078, 13.1250, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2221.8359, -1659.1172, 17.6016, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2235.1719, -1659.2813, 17.6094, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2236.0391, -1650.4219, 17.6016, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2335.3828, -1653.2891, 15.5781, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2350.1641, -1664.6875, 15.7500, 0.25);
	RemoveBuildingForPlayer(playerid, 1312, 1312.0469, -1139.7500, 26.8750, 0.25);
	//lspd exterior - 10
	RemoveBuildingForPlayer(playerid, 700, 1192.1016, -1738.0000, 13.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 647, 1192.1016, -1733.0156, 14.3438, 0.25);
	RemoveBuildingForPlayer(playerid, 673, 1192.5625, -1723.8828, 12.5234, 0.25);
	RemoveBuildingForPlayer(playerid, 647, 1198.3203, -1724.5859, 14.3438, 0.25);
	RemoveBuildingForPlayer(playerid, 700, 1204.4844, -1724.8516, 13.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 1215, 1221.0234, -1722.7656, 13.1016, 0.25);
	RemoveBuildingForPlayer(playerid, 647, 1257.5781, -1724.6875, 14.3438, 0.25);
	RemoveBuildingForPlayer(playerid, 1215, 1233.4844, -1722.7656, 13.1016, 0.25);
	RemoveBuildingForPlayer(playerid, 1297, 1219.9844, -1717.2344, 15.9141, 0.25);
	RemoveBuildingForPlayer(playerid, 1297, 1251.5703, -1717.2344, 15.9141, 0.25);
	//carpintero 60 objs
    RemoveBuildingForPlayer(playerid, 3672, 2112.9375, -2384.6172, 18.8828, 0.25);
	RemoveBuildingForPlayer(playerid, 1290, 2088.6094, -2350.7344, 18.4766, 0.25);
	RemoveBuildingForPlayer(playerid, 3629, 2112.9375, -2384.6172, 18.8828, 0.25);

	return 1;
}

stock cargar_maps()
{

	//ISLA 2
	CreateDynamicObject(10410, -2077.97, -7664.46, 16.15,   0.00, 0.00, 249.99);
	CreateDynamicObject(6295, -2167.59, -7731.46, 75.98,   0.00, 0.00, 313.99);
	CreateDynamicObject(8493, -2069.85, -7560.68, 17.75,   0.00, 0.00, 286.00);
	CreateDynamicObject(9159, -2069.90, -7560.67, 17.66,   0.00, 0.00, 286.00);
	CreateDynamicObject(3886, -2045.37, -7603.08, 1.17,   0.00, 0.00, 112.00);
	CreateDynamicObject(3886, -2054.76, -7607.02, 1.17,   0.00, 0.00, 112.00);
	CreateDynamicObject(3886, -2063.81, -7611.25, 1.17,   0.00, 0.00, 113.99);
	CreateDynamicObject(3886, -2073.07, -7615.65, 1.17,   0.00, 0.00, 115.99);
	CreateDynamicObject(3886, -2082.34, -7619.91, 1.17,   0.00, 0.00, 115.99);
	CreateDynamicObject(3886, -2037.72, -7605.93, -24.58,   180.00, 0.00, 19.99);
	CreateDynamicObject(3886, -2034.00, -7614.66, -24.58,   179.99, 0.00, 23.98);
	CreateDynamicObject(3886, -2029.41, -7622.55, -24.58,   179.99, 0.00, 35.98);
	CreateDynamicObject(3886, -2026.52, -7627.24, -24.58,   179.99, 0.00, 37.98);
	CreateDynamicObject(3886, -2041.69, -7607.25, -25.08,   179.99, 0.00, 21.98);
	CreateDynamicObject(3886, -2046.06, -7608.58, -25.08,   179.99, 0.00, 21.98);
	CreateDynamicObject(3886, -2048.62, -7609.62, -25.08,   179.99, 0.00, 35.98);
	CreateDynamicObject(3886, -2053.34, -7612.22, -24.83,   179.99, 0.00, 23.97);
	CreateDynamicObject(3886, -2057.36, -7613.09, -24.83,   179.99, 0.00, 15.97);
	CreateDynamicObject(3886, -2058.91, -7614.17, -24.83,   179.99, 0.00, 43.97);
	CreateDynamicObject(3886, -2063.58, -7616.35, -24.83,   179.99, 0.00, 19.97);
	CreateDynamicObject(3886, -2067.72, -7617.73, -24.83,   179.99, 0.00, 19.96);
	CreateDynamicObject(3886, -2071.55, -7619.26, -24.83,   179.99, 0.00, 23.96);
	CreateDynamicObject(3886, -2074.91, -7620.97, -24.83,   179.99, 0.00, 27.96);
	CreateDynamicObject(3886, -2079.52, -7622.90, -24.83,   179.99, 0.00, 21.96);
	CreateDynamicObject(3886, -2084.46, -7623.97, -24.83,   179.99, 0.00, 11.96);
	CreateDynamicObject(3886, -2082.42, -7622.48, -37.58,   179.99, 0.00, 33.95);
	CreateDynamicObject(3886, -2079.69, -7621.20, -37.58,   179.99, 0.00, 17.95);
	CreateDynamicObject(3886, -2075.49, -7619.32, -37.58,   179.99, 0.00, 25.95);
	CreateDynamicObject(3886, -2072.36, -7617.98, -37.58,   179.99, 0.00, 21.95);
	CreateDynamicObject(3886, -2084.94, -7623.42, -37.58,   179.99, 0.00, 31.95);
	CreateDynamicObject(11245, -2168.12, -7732.64, 102.32,   0.00, 289.99, 0.00);
	CreateDynamicObject(16410, -2104.77, -7654.68, 16.91,   0.00, 0.00, 8.00);
	CreateDynamicObject(3249, -2067.42, -7629.32, 1.82,   0.00, 0.00, 205.99);
	CreateDynamicObject(16690, -2041.82, -7650.43, 5.23,   0.00, 0.00, 25.99);
	CreateDynamicObject(16051, -2063.61, -7621.02, 5.32,   0.00, 0.00, 296.00);
	CreateDynamicObject(16105, -2054.06, -7619.60, 3.71,   0.00, 0.00, 294.00);
	CreateDynamicObject(711, -2051.69, -7614.59, 7.42,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2074.21, -7630.26, 8.17,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2039.92, -7614.29, 7.92,   0.00, 0.00, 0.00);
	CreateDynamicObject(837, -2048.89, -7618.19, 2.70,   0.00, 0.00, 291.99);
	CreateDynamicObject(711, -2058.12, -7637.76, 8.67,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2085.12, -7656.40, 22.17,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2079.04, -7670.51, 17.77,   0.00, 0.00, 0.00);
	CreateDynamicObject(746, -2042.10, -7608.63, 2.04,   0.00, 0.00, 18.00);
	CreateDynamicObject(750, -2094.10, -7639.22, 16.50,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2122.52, -7604.04, 0.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2118.81, -7604.04, -0.82,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2114.67, -7606.59, 1.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2110.87, -7606.36, 1.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2113.22, -7605.51, 1.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2116.52, -7604.33, 1.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2121.70, -7606.19, 1.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2121.00, -7610.16, 1.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2107.17, -7609.73, 1.43,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2108.31, -7608.01, 0.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2104.99, -7611.04, 0.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2106.84, -7613.07, 0.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2111.08, -7613.27, 0.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2116.23, -7612.97, 0.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2115.89, -7612.60, 2.93,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2113.02, -7609.46, 2.93,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2110.45, -7611.47, 2.93,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2104.06, -7615.44, 2.93,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2105.83, -7618.55, 0.93,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2109.57, -7618.22, 5.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2107.70, -7614.50, 5.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2107.70, -7614.50, 5.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(1610, -2050.08, -7609.03, 1.70,   0.00, 0.00, 0.00);
	CreateDynamicObject(2782, -2094.12, -7639.89, 21.43,   0.00, 0.00, 338.00);
	CreateDynamicObject(711, -2100.20, -7637.92, 22.17,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2111.62, -7697.52, 24.59,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2092.01, -7699.61, 24.59,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2118.54, -7644.17, 18.59,   0.00, 0.00, 0.00);
	CreateDynamicObject(3461, -2100.02, -7726.35, 32.75,   0.00, 0.00, 0.00);
	CreateDynamicObject(3461, -2093.30, -7728.35, 33.09,   0.00, 0.00, 0.00);
	CreateDynamicObject(3461, -2093.85, -7712.72, 26.67,   0.00, 0.00, 0.00);
	CreateDynamicObject(3461, -2088.64, -7714.66, 26.82,   0.00, 0.00, 0.00);
	CreateDynamicObject(3461, -2090.41, -7703.03, 22.48,   0.00, 0.00, 0.00);
	CreateDynamicObject(3461, -2077.82, -7686.26, 16.67,   0.00, 0.00, 0.00);
	CreateDynamicObject(3461, -2085.73, -7704.87, 22.38,   0.00, 0.00, 0.00);
	CreateDynamicObject(3461, -2082.08, -7684.87, 16.52,   0.00, 0.00, 0.00);
	CreateDynamicObject(3461, -2075.26, -7670.10, 12.92,   0.00, 0.00, 0.00);
	CreateDynamicObject(3461, -2069.68, -7671.35, 13.20,   0.00, 0.00, 0.00);
	CreateDynamicObject(3524, -2072.08, -7662.64, 11.63,   0.00, 0.00, 150.00);
	CreateDynamicObject(3524, -2066.39, -7665.21, 11.63,   0.00, 0.00, 155.99);
	CreateDynamicObject(711, -2111.62, -7697.52, 24.59,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2128.17, -7723.98, 37.83,   0.00, 0.00, 0.00);
	CreateDynamicObject(2906, -2026.52, -7636.03, 0.23,   70.00, 0.00, 106.00);
	CreateDynamicObject(855, -2100.13, -7616.80, 1.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2101.38, -7621.28, 1.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2099.84, -7623.25, 1.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2095.71, -7624.46, 1.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2096.33, -7623.67, 1.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2098.64, -7621.34, 2.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2101.32, -7624.95, 2.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(855, -2105.17, -7621.70, 3.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(10409, -2105.54, -7727.36, 27.33,   0.00, 0.00, 252.00);
	CreateDynamicObject(10409, -2104.59, -7725.89, 19.67,   0.00, 0.00, 252.00);
	CreateDynamicObject(10409, -2103.37, -7732.86, 18.17,   0.00, 0.00, 252.00);
	CreateDynamicObject(18228, -2042.41, -7764.88, 0.00,   0.00, 0.00, 36.00);
	CreateDynamicObject(18228, -2058.57, -7795.75, 0.00,   0.00, 0.00, 358.00);
	CreateDynamicObject(18228, -2127.44, -7627.25, -4.25,   0.00, 0.00, 233.99);
	CreateDynamicObject(18228, -2023.91, -7709.11, -12.25,   0.00, 0.00, 39.99);
	CreateDynamicObject(18228, -2022.96, -7686.87, -3.89,   0.00, 0.00, 31.99);
	CreateDynamicObject(18228, -2128.08, -7653.04, -4.25,   0.00, 0.00, 237.99);
	CreateDynamicObject(18228, -2127.66, -7667.83, -1.50,   0.00, 0.00, 237.99);
	CreateDynamicObject(18228, -2130.26, -7694.27, -6.00,   0.00, 0.00, 237.99);
	CreateDynamicObject(18228, -2130.26, -7694.27, 0.75,   0.00, 0.00, 237.99);
	CreateDynamicObject(18228, -2132.85, -7702.26, 0.75,   0.00, 0.00, 229.99);
	CreateDynamicObject(18228, -2153.67, -7713.76, 14.25,   0.00, 0.00, 179.99);
	CreateDynamicObject(18228, -2159.62, -7702.87, 1.25,   0.00, 0.00, 179.98);
	CreateDynamicObject(18228, -2159.62, -7702.87, 1.25,   0.00, 0.00, 179.98);
	CreateDynamicObject(18228, -2163.27, -7714.20, 12.00,   0.00, 0.00, 199.98);
	CreateDynamicObject(18228, -2166.04, -7706.16, 1.50,   0.00, 0.00, 199.97);
	CreateDynamicObject(18228, -2171.84, -7719.27, 11.50,   0.00, 0.00, 199.98);
	CreateDynamicObject(18228, -2178.36, -7719.03, 29.75,   0.00, 0.00, 199.98);
	CreateDynamicObject(18228, -2180.43, -7710.43, 17.25,   0.00, 0.00, 199.98);
	CreateDynamicObject(18228, -2183.39, -7704.64, 10.25,   0.00, 0.00, 199.98);
	CreateDynamicObject(18228, -2186.91, -7697.74, 2.25,   0.00, 0.00, 199.98);
	CreateDynamicObject(18228, -2193.09, -7727.74, 18.50,   0.00, 0.00, 199.98);
	CreateDynamicObject(18228, -2201.84, -7727.96, 2.50,   0.00, 0.00, 199.98);
	CreateDynamicObject(18228, -2180.67, -7725.22, 37.50,   0.00, 0.00, 199.97);
	CreateDynamicObject(18228, -2173.78, -7748.95, 37.50,   0.00, 0.00, 259.98);
	CreateDynamicObject(18228, -2190.52, -7757.55, 19.25,   0.00, 0.00, 259.97);
	CreateDynamicObject(18228, -2202.40, -7762.47, 1.00,   0.00, 0.00, 259.97);
	CreateDynamicObject(18228, -2179.99, -7759.43, 1.00,   0.00, 0.00, 289.97);
	CreateDynamicObject(18228, -2177.27, -7707.10, 11.50,   0.00, 0.00, 199.97);
	CreateDynamicObject(18228, -2199.97, -7712.99, 14.75,   0.00, 0.00, 199.98);
	CreateDynamicObject(18228, -2208.20, -7701.68, 7.50,   0.00, 0.00, 199.97);
	CreateDynamicObject(18228, -2209.39, -7742.42, 5.50,   0.00, 0.00, 259.97);
	CreateDynamicObject(18228, -2160.81, -7714.95, 14.25,   0.00, 0.00, 177.98);
	CreateDynamicObject(18228, -2062.86, -7794.79, 10.25,   0.00, 0.00, 330.00);
	CreateDynamicObject(18228, -2089.48, -7797.66, 4.75,   0.00, 0.00, 330.00);
	CreateDynamicObject(18228, -2088.34, -7787.84, 18.75,   0.00, 0.00, 309.99);
	CreateDynamicObject(18228, -2108.85, -7757.39, 30.50,   0.00, 0.00, 39.99);
	CreateDynamicObject(18228, -2130.23, -7777.92, 24.50,   0.00, 0.00, 289.99);
	CreateDynamicObject(18228, -2137.99, -7795.25, 5.25,   0.00, 0.00, 289.98);
	CreateDynamicObject(18228, -2153.73, -7772.89, 5.25,   0.00, 0.00, 293.98);
	CreateDynamicObject(18228, -2168.76, -7785.05, 5.25,   0.00, 0.00, 307.98);
	CreateDynamicObject(18228, -2058.45, -7805.57, -1.75,   0.00, 0.00, 330.00);
	CreateDynamicObject(18228, -2162.16, -7766.62, 20.00,   0.00, 0.00, 305.97);
	CreateDynamicObject(18228, -2165.20, -7760.41, 28.75,   0.00, 0.00, 319.97);
	CreateDynamicObject(18228, -2170.50, -7753.71, 36.25,   0.00, 0.00, 319.97);
	CreateDynamicObject(18228, -2164.37, -7750.52, 36.25,   0.00, 0.00, 329.97);
	CreateDynamicObject(18228, -2175.98, -7763.43, 28.00,   0.00, 0.00, 305.97);
	CreateDynamicObject(18228, -2194.35, -7773.49, 13.00,   0.00, 0.00, 305.96);
	CreateDynamicObject(18228, -2204.53, -7782.02, 3.75,   0.00, 0.00, 293.96);
	CreateDynamicObject(18228, -2023.91, -7709.11, -12.25,   0.00, 0.00, 39.99);
	CreateDynamicObject(18228, -2032.90, -7729.96, 0.00,   0.00, 0.00, 39.99);
	CreateDynamicObject(18228, -2014.35, -7657.48, -9.64,   0.00, 0.00, 83.98);
	CreateDynamicObject(8483, -2141.61, -7748.52, 38.98,   0.00, 0.00, 73.98);
	CreateDynamicObject(18228, -2117.08, -7765.72, 30.50,   0.00, 0.00, 279.99);
	CreateDynamicObject(18228, -2131.99, -7768.18, 35.25,   0.00, 0.00, 279.99);
	CreateDynamicObject(18228, -2128.20, -7782.67, 19.75,   0.00, 0.00, 279.99);
	CreateDynamicObject(18228, -2112.23, -7612.62, -9.50,   0.00, 0.00, 117.99);
	CreateDynamicObject(18228, -2121.45, -7608.68, -9.50,   0.00, 0.00, 127.99);
	CreateDynamicObject(3434, -2140.03, -7741.95, 44.88,   0.00, 0.00, 161.99);
	CreateDynamicObject(1431, -2049.57, -7615.00, 2.74,   0.00, 0.00, 0.00);
	CreateDynamicObject(935, -2066.36, -7620.18, 2.52,   0.00, 0.00, 0.00);
	CreateDynamicObject(3243, -2105.42, -7647.03, 17.86,   0.00, 0.00, 221.99);
	CreateDynamicObject(3243, -2086.43, -7651.65, 17.36,   0.00, 0.00, 107.99);
	CreateDynamicObject(11427, -2066.43, -7724.34, 23.33,   0.00, 0.00, 273.99);
	CreateDynamicObject(5777, -2099.60, -7639.82, 17.93,   0.00, 0.00, 256.00);
	CreateDynamicObject(2895, -2099.82, -7640.59, 17.63,   0.00, 0.00, 0.00);
	CreateDynamicObject(16689, -2071.94, -7762.65, 36.08,   0.00, 0.00, 11.99);
	CreateDynamicObject(3461, -2094.71, -7740.53, 34.86,   0.00, 0.00, 0.00);
	CreateDynamicObject(3461, -2104.88, -7735.29, 34.32,   0.00, 0.00, 0.00);
	CreateDynamicObject(18228, -2109.48, -7765.70, 30.50,   0.00, 0.00, 271.98);
	CreateDynamicObject(16285, -2063.80, -7777.70, 33.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(2780, -2144.34, -7742.71, 34.25,   0.00, 0.00, 0.00);
	CreateDynamicObject(2780, -2130.42, -7744.83, 34.25,   0.00, 0.00, 0.00);
	CreateDynamicObject(2780, -2138.88, -7743.75, 33.50,   0.00, 0.00, 0.00);
	CreateDynamicObject(2780, -2140.33, -7746.93, 47.75,   0.00, 0.00, 0.00);
	CreateDynamicObject(3524, -2139.05, -7742.75, 32.93,   0.00, 0.00, 170.00);
	CreateDynamicObject(3528, -2137.83, -7744.98, 41.92,   0.00, 344.99, 54.00);
	CreateDynamicObject(3528, -2140.74, -7744.37, 41.67,   0.00, 344.99, 76.00);
	CreateDynamicObject(14608, -2121.40, -7718.55, 23.33,   0.00, 0.00, 289.99);
	CreateDynamicObject(1313, -2077.86, -7753.56, 35.89,   0.00, 0.00, 0.00);
	CreateDynamicObject(2045, -2137.14, -7734.17, 33.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(3364, -2038.80, -7662.40, 13.50,   4.00, 0.00, 216.00);
	CreateDynamicObject(16502, -2015.94, -7661.86, 11.33,   0.00, 0.00, 24.00);
	CreateDynamicObject(749, -2007.61, -7667.93, -3.09,   0.00, 0.00, 0.00);
	CreateDynamicObject(749, -2010.85, -7667.85, -3.34,   0.00, 0.00, 0.00);
	CreateDynamicObject(758, -2118.47, -7731.05, 31.74,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2121.72, -7736.25, 39.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2157.23, -7710.05, 57.16,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2154.92, -7721.26, 57.20,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2159.97, -7743.56, 58.33,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2169.95, -7723.77, 58.16,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2151.00, -7736.64, 57.77,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2146.40, -7740.42, 49.35,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2091.79, -7738.08, 39.39,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2070.86, -7772.67, 38.86,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2068.60, -7746.27, 38.73,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2122.67, -7681.60, 23.98,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2026.03, -7655.13, 17.96,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2052.13, -7662.27, 19.23,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2047.26, -7722.52, 21.59,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2031.19, -7686.14, 19.00,   0.00, 0.00, 0.00);
	CreateDynamicObject(711, -2044.94, -7680.76, 19.88,   0.00, 0.00, 0.00);
	CreateDynamicObject(803, -2086.78, -7660.24, 18.90,   0.00, 0.00, 0.00);
	CreateDynamicObject(808, -2076.26, -7643.58, 4.46,   0.00, 0.00, 0.00);
	CreateDynamicObject(808, -2047.86, -7722.44, 16.94,   0.00, 0.00, 0.00);
	CreateDynamicObject(808, -2038.78, -7626.19, 3.55,   0.00, 0.00, 0.00);
	CreateDynamicObject(808, -2027.21, -7654.23, 14.04,   0.00, 0.00, 0.00);
	CreateDynamicObject(808, -2135.18, -7721.78, 35.17,   0.00, 0.00, 0.00);
	CreateDynamicObject(808, -2089.78, -7762.76, 34.86,   0.00, 0.00, 0.00);
	CreateDynamicObject(648, -2207.27, -7694.20, 14.49,   0.00, 41.00, 128.00);
	CreateDynamicObject(710, -2031.87, -7644.26, 16.71,   0.00, 0.00, 0.00);
	CreateDynamicObject(18228, -2180.62, -7742.37, 37.50,   0.00, 0.00, 243.97);
	CreateDynamicObject(3461, -2124.33, -7716.42, 23.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(3461, -2117.53, -7719.12, 22.96,   0.00, 0.00, 0.00);
	CreateDynamicObject(2631, -2120.31, -7716.64, 21.68,   0.00, 0.00, 335.99);
	CreateDynamicObject(2869, -2120.27, -7717.03, 21.74,   0.00, 0.00, 302.00);
	CreateDynamicObject(14705, -2121.70, -7716.80, 21.90,   0.00, 0.00, 0.00);
	CreateDynamicObject(2096, -2080.10, -7753.02, 33.30,   0.00, 0.00, 130.00);
	CreateDynamicObject(838, -2048.98, -7743.14, 18.54,   0.00, 0.00, 0.00);
	CreateDynamicObject(18228, -2213.20, -7693.69, 1.25,   0.00, 0.00, 181.98);
	CreateDynamicObject(710, -2090.98, -7777.92, 47.72,   0.00, 0.00, 0.00);
	CreateDynamicObject(710, -2170.99, -7719.15, 64.05,   0.00, 0.00, 0.00);
	CreateDynamicObject(9831, -2122.89, -7721.57, 23.33,   0.00, 0.00, 332.00);
	CreateDynamicObject(9831, -2120.66, -7721.39, 23.33,   0.00, 0.00, 331.99);
	CreateDynamicObject(9831, -2123.51, -7719.75, 22.83,   0.00, 0.00, 31.99);
	CreateDynamicObject(1517, -2079.76, -7753.23, 32.75,   0.00, 0.00, 0.00);
	CreateDynamicObject(1520, -2066.32, -7620.07, 3.08,   0.00, 0.00, 0.00);
	CreateDynamicObject(1667, -2066.47, -7620.16, 3.15,   0.00, 0.00, 0.00);
	CreateDynamicObject(1736, -2079.12, -7753.83, 34.89,   0.00, 0.00, 208.00);
	CreateDynamicObject(1828, -2054.87, -7617.05, 1.61,   0.00, 0.00, 0.00);
	CreateDynamicObject(18228, -2046.07, -7789.42, -5.00,   0.00, 0.00, 330.00);
	CreateDynamicObject(18228, -2025.41, -7771.08, -15.25,   0.00, 0.00, 27.99);
	CreateDynamicObject(18228, -2217.64, -7732.85, -7.50,   0.00, 0.00, 271.97);
	CreateDynamicObject(18228, -2218.62, -7766.58, -7.50,   0.00, 0.00, 285.97);
	CreateDynamicObject(18228, -2216.17, -7776.45, -7.50,   0.00, 0.00, 319.97);
	CreateDynamicObject(18228, -2208.53, -7779.44, -7.50,   0.00, 0.00, 7.97);
	CreateDynamicObject(18228, -2188.69, -7787.85, -7.50,   0.00, 0.00, 27.97);
	CreateDynamicObject(18228, -2111.20, -7761.45, 30.50,   0.00, 0.00, 25.99);
	CreateDynamicObject(18228, -2110.34, -7770.38, 30.50,   0.00, 0.00, 269.98);
	CreateDynamicObject(18228, -2081.45, -7789.58, 18.75,   0.00, 0.00, 297.99);
	CreateDynamicObject(18228, -2187.14, -7745.08, 28.50,   0.00, 0.00, 243.97);
	CreateDynamicObject(18228, -2197.64, -7744.93, 14.75,   0.00, 0.00, 243.97);
	CreateDynamicObject(18228, -2211.18, -7693.79, -2.25,   0.00, 0.00, 199.97);
	CreateDynamicObject(18228, -2187.55, -7718.17, 25.25,   0.00, 0.00, 199.98);
	CreateDynamicObject(18228, -2215.04, -7750.00, 1.75,   0.00, 0.00, 259.97);
	CreateDynamicObject(18228, -2231.04, -7754.53, -12.00,   0.00, 0.00, 259.97);
	CreateDynamicObject(3872, -2171.26, -7726.15, 94.34,   0.00, 0.00, 300.00);
	CreateDynamicObject(18228, -2166.89, -7702.44, 1.75,   0.00, 0.00, 221.97);
	CreateDynamicObject(18228, -2158.60, -7707.25, 1.75,   0.00, 0.00, 207.97);
	CreateDynamicObject(900, -2157.60, -7665.80, -6.00,   0.00, 0.00, 0.00);
	CreateDynamicObject(900, -2151.10, -7648.97, -6.00,   0.00, 0.00, 0.00);
	CreateDynamicObject(900, -2135.69, -7661.19, -6.00,   0.00, 0.00, 344.00);
	CreateDynamicObject(900, -2140.20, -7671.99, -5.25,   0.00, 0.00, 352.00);
	CreateDynamicObject(900, -2139.60, -7659.26, -5.00,   0.00, 0.00, 0.00);
	CreateDynamicObject(18228, -2138.77, -7648.42, -9.50,   0.00, 0.00, 231.96);
	CreateDynamicObject(18228, -2125.25, -7794.01, 6.25,   0.00, 0.00, 279.99);
	CreateDynamicObject(18228, -2181.06, -7732.59, 36.00,   0.00, 0.00, 213.97);
	CreateDynamicObject(18228, -2164.67, -7753.12, 41.50,   0.00, 0.00, 335.97);
	CreateDynamicObject(18228, -2170.48, -7762.63, 29.50,   0.00, 0.00, 335.97);
	CreateDynamicObject(18228, -2182.95, -7750.86, 23.50,   0.00, 0.00, 327.96);
	CreateDynamicObject(18228, -2173.01, -7769.80, 18.75,   0.00, 0.00, 335.96);
	CreateDynamicObject(18228, -2011.50, -7662.16, -9.64,   0.00, 0.00, 83.99);
	CreateDynamicObject(622, -2156.67, -7797.49, 13.59,   0.00, 0.00, 248.00);
	CreateDynamicObject(18228, -2081.46, -7807.16, 0.25,   0.00, 0.00, 309.99);
	CreateDynamicObject(18228, -2133.17, -7812.24, -13.25,   0.00, 0.00, 279.99);
	CreateDynamicObject(18228, -2091.62, -7817.55, -13.25,   0.00, 0.00, 331.99);
	CreateDynamicObject(18228, -2047.77, -7805.03, -13.25,   0.00, 0.00, 5.98);
	CreateDynamicObject(18228, -2012.70, -7728.90, -16.25,   0.00, 0.00, 61.98);
	CreateDynamicObject(1458, -2048.98, -7626.10, 2.47,   0.00, 0.00, 342.00);
	CreateDynamicObject(16406, -2200.05, -7794.86, 16.23,   0.00, 0.00, 40.00);
	CreateDynamicObject(18228, -2192.60, -7757.65, 8.25,   0.00, 0.00, 327.96);
	CreateDynamicObject(18228, -2173.41, -7771.43, 16.50,   0.00, 0.00, 335.96);
	CreateDynamicObject(16404, -2112.30, -7677.04, 20.02,   0.00, 0.00, 0.00);
	CreateDynamicObject(1451, -2060.26, -7766.20, 33.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(1454, -2086.55, -7770.07, 33.50,   0.00, 0.00, 0.00);
	CreateDynamicObject(6865, -2145.10, -7725.32, 42.47,   0.00, 0.00, 128.00);
	CreateDynamicObject(1486, -2098.75, -7571.04, 10.21,   0.00, 0.00, 0.00);
	CreateDynamicObject(1433, -2100.48, -7568.82, 9.12,   0.00, 0.00, 0.00);
	CreateDynamicObject(1609, -2013.29, -7648.17, 0.00,   0.00, 0.00, 0.00);
	CreateDynamicObject(18228, -2024.53, -7634.94, -15.64,   0.00, 0.00, 77.98);
	CreateDynamicObject(18228, -2032.51, -7611.65, -18.14,   0.00, 0.00, 77.98);
	CreateDynamicObject(18228, -2029.38, -7622.06, -15.64,   0.00, 0.00, 77.98);
	CreateDynamicObject(18228, -2037.00, -7603.05, -18.64,   0.00, 0.00, 85.98);
	CreateDynamicObject(18228, -2039.14, -7602.02, -18.64,   0.00, 0.00, 93.98);
	CreateDynamicObject(18228, -2126.34, -7657.73, -4.25,   0.00, 0.00, 237.99);
	CreateDynamicObject(18228, -2132.95, -7706.51, 4.25,   0.00, 0.00, 229.99);
	CreateDynamicObject(18228, -2132.95, -7716.77, 6.25,   0.00, 0.00, 229.99);
	CreateDynamicObject(18228, -2061.39, -7791.88, 14.75,   0.00, 0.00, 330.00);
	CreateDynamicObject(18228, -2070.94, -7791.34, 17.50,   0.00, 0.00, 314.00);
	CreateDynamicObject(18228, -2129.08, -7767.17, 35.25,   0.00, 0.00, 279.99);

	//gasomarket
	CreateDynamicObject(6959, 1006.96991, -1602.05054, 12.56170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(6959, 965.66241, -1601.99915, 12.56170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(5409, 1004.46179, -1614.31360, 16.95690,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1676, 1006.84711, -1591.54175, 14.01240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1676, 1002.27966, -1591.36023, 14.01240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1676, 999.82178, -1591.35876, 14.01240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1676, 995.19556, -1591.35938, 14.01240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1574, 997.50055, -1591.40637, 12.57056,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1574, 1004.51880, -1591.50244, 12.57056,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1024.40771, -1582.06274, 13.16294,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1027.35437, -1585.71509, 13.16290,   0.00000, 0.00000, 89.00000);
	CreateDynamicObject(970, 993.31635, -1582.03699, 13.16294,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 984.49438, -1584.73462, 13.16290,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1216, 995.51709, -1604.63599, 13.21870,   0.00000, 0.00000, -183.00000);
	CreateDynamicObject(1216, 998.56042, -1604.60742, 13.21870,   0.00000, 0.00000, -183.00000);
	CreateDynamicObject(1216, 1001.49182, -1604.72644, 13.21870,   0.00000, 0.00000, -183.00000);
	CreateDynamicObject(1256, 1013.91199, -1581.56628, 13.15920,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1229, 1006.21960, -1578.12610, 13.33380,   0.00000, 0.00000, 87.00000);
	CreateDynamicObject(1229, 1006.17615, -1578.07458, 13.33380,   0.00000, 0.00000, 273.00000);
	CreateDynamicObject(1256, 1003.38910, -1581.57800, 13.15920,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1256, 993.38257, -1581.61914, 13.15920,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 998.40009, -1582.01611, 13.16294,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1003.47992, -1582.05835, 13.16294,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1008.46820, -1582.04065, 13.16294,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1013.99609, -1582.06531, 13.16294,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1027.04053, -1612.96265, 13.16290,   0.00000, 0.00000, 89.00000);
	CreateDynamicObject(970, 1027.16174, -1591.11951, 13.16290,   0.00000, 0.00000, 89.00000);
	CreateDynamicObject(970, 1027.20068, -1602.16541, 13.16290,   0.00000, 0.00000, 89.00000);
	CreateDynamicObject(970, 1027.16760, -1607.46326, 13.16290,   0.00000, 0.00000, 89.00000);
	CreateDynamicObject(1214, 990.71130, -1582.21362, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 984.39099, -1582.08740, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 978.95416, -1581.98547, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 995.87762, -1582.16565, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 1001.02594, -1582.17957, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 1006.08521, -1582.20007, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 1011.18170, -1582.21631, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 1021.99969, -1582.16541, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 1027.23633, -1582.09412, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 1027.47839, -1582.96301, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 1027.17407, -1588.42798, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 1027.02173, -1593.78430, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 1027.10657, -1599.68518, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1007.35809, -1590.67261, 12.98290,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1003.19702, -1590.67505, 12.98290,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 999.06091, -1590.68274, 12.98290,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 994.89410, -1590.68372, 12.98290,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 994.98468, -1592.31152, 12.98290,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 999.14423, -1592.31360, 12.98290,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1003.27637, -1592.32739, 12.98290,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1007.38202, -1592.33105, 12.98290,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19124, 992.83270, -1591.51978, 12.91410,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19124, 1009.32867, -1591.59180, 12.91410,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 981.67163, -1581.87463, 13.16294,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 984.45850, -1590.05762, 13.16290,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 984.42609, -1595.61646, 13.16290,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 984.38934, -1601.11572, 13.16290,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 984.31500, -1606.52747, 13.16290,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 984.23047, -1611.79370, 13.16290,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1214, 984.32196, -1587.33508, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 984.22986, -1592.90393, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 984.20825, -1598.47559, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 984.19244, -1604.00073, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 984.12787, -1609.33887, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 984.12787, -1609.33887, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 984.16754, -1614.64771, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(955, 1012.51617, -1604.51086, 12.92880,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(955, 1009.71143, -1604.43604, 12.92880,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19445, 1015.83862, -1608.73633, 10.79170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 1027.09119, -1604.85486, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 1027.04211, -1610.36438, 12.52349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19445, 1020.74695, -1608.64563, 10.79170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19445, 1024.85815, -1608.69702, 10.79170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19445, 993.76764, -1608.58142, 10.79170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19445, 989.37549, -1608.37158, 10.79170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19445, 985.02094, -1608.48291, 10.79170,   0.00000, 0.00000, 0.00000);

	//iglesia interior by: forumsamp(@CrucixTM)
	CreateDynamicObject(9931,1947.54003906,-368.51269531,1108.01086426,0.00000000,0.00000000,90.00000000); //object(church_sfe) (1)
	CreateDynamicObject(3976,1970.65722656,-341.23883057,1100.22949219,0.00000000,0.00000000,0.00000000); //object(policest02_lan) (1)
	CreateDynamicObject(9931,1980.55761719,-368.51562500,1108.01086426,0.00000000,0.00000000,90.00000000); //object(church_sfe) (2)
	CreateDynamicObject(3976,1962.70117188,-400.46679688,1109.52941895,0.00000000,0.00000000,90.00000000); //object(policest02_lan) (2)
	CreateDynamicObject(11472,1964.78710938,-372.02050781,1089.22351074,0.00000000,0.00000000,0.00000000); //object(des_swtstairs1) (1)
	CreateDynamicObject(11472,1963.28967285,-372.02139282,1089.22351074,0.00000000,0.00000000,0.00000000); //object(des_swtstairs1) (2)
	CreateDynamicObject(11472,1964.04479980,-372.98049927,1089.46386719,0.00000000,0.00000000,0.00000000); //object(des_swtstairs1) (3)
	CreateDynamicObject(2896,1959.29248047,-370.91723633,1093.34313965,0.00000000,0.00000000,90.00000000); //object(casket_law) (1)
	CreateDynamicObject(11472,1962.66918945,-373.82989502,1087.66955566,90.00000000,180.00000000,270.00000000); //object(des_swtstairs1) (4)
	CreateDynamicObject(11472,1965.41259766,-373.81991577,1087.66992188,90.00000000,180.00000000,90.00000000); //object(des_swtstairs1) (5)
	CreateDynamicObject(970,1970.61437988,-368.20404053,1093.28039551,0.00000000,0.00000000,0.00000000); //object(fencesmallb) (1)
	CreateDynamicObject(970,1968.51074219,-368.20703125,1093.28039551,0.00000000,0.00000000,0.00000000); //object(fencesmallb) (2)
	CreateDynamicObject(970,1957.52185059,-368.25833130,1093.28039551,0.00000000,0.00000000,0.00000000); //object(fencesmallb) (3)
	CreateDynamicObject(970,1959.61914062,-368.25585938,1093.28039551,0.00000000,0.00000000,0.00000000); //object(fencesmallb) (4)
	CreateDynamicObject(6959,1963.97839355,-368.12149048,1072.75439453,90.00000000,0.00000000,0.25000000); //object(vegasnbball1) (2)
	CreateDynamicObject(2960,1964.05883789,-348.98986816,1101.36645508,0.00000000,90.00000000,89.99450684); //object(kmb_beam) (1)
	CreateDynamicObject(2960,1963.98291016,-349.00000000,1101.70666504,90.00000000,0.00000000,179.99450684); //object(kmb_beam) (2)
	CreateDynamicObject(2960,1964.05871582,-348.99044800,1100.00585938,0.00000000,90.00000000,90.00000000); //object(kmb_beam) (3)
	CreateDynamicObject(3872,1964.02685547,-346.40850830,1102.33020020,0.00000000,155.25000000,90.27026367); //object(ws_floodbeams) (1)
	CreateDynamicObject(1667,1962.98828125,-370.41271973,1093.62292480,0.00000000,0.00000000,0.00000000); //object(propwineglass1) (1)
	CreateDynamicObject(1664,1962.83520508,-370.42520142,1093.70104980,0.00000000,0.00000000,0.00000000); //object(propwinebotl2) (1)
	CreateDynamicObject(2868,1965.95605469,-370.30142212,1093.53430176,0.00000000,0.00000000,0.00000000); //object(gb_ornament03) (1)
	CreateDynamicObject(2869,1964.02185059,-373.78527832,1093.66992188,0.00000000,0.00000000,323.75000000); //object(gb_ornament04) (1)
	CreateDynamicObject(2870,1965.26269531,-373.64062500,1093.66992188,0.00000000,0.00000000,350.03002930); //object(gb_ornament05) (1)
	CreateDynamicObject(2270,1965.47998047,-352.47622681,1093.48364258,0.00000000,0.00000000,270.00000000); //object(frame_wood_6) (1)
	CreateDynamicObject(2257,1964.05615234,-373.94995117,1095.86132812,0.00000000,0.00000000,180.00000000); //object(frame_clip_4) (1)
	CreateDynamicObject(2271,1962.60437012,-352.58059692,1093.48803711,0.00000000,0.00000000,90.00000000); //object(frame_wood_1) (1)
	CreateDynamicObject(2357,1964.05090332,-370.68905640,1093.12402344,0.00000000,0.00000000,0.00000000); //object(dunc_dinning) (1)
	CreateDynamicObject(2808,1957.51367188,-364.26171875,1092.59191895,0.00000000,0.00000000,179.99450684); //object(cj_pizza_chair4) (1)
	CreateDynamicObject(2808,1959.68164062,-364.26171875,1092.59191895,0.00000000,0.00000000,179.99450684); //object(cj_pizza_chair4) (2)
	CreateDynamicObject(2808,1970.61328125,-364.26171875,1092.59191895,0.00000000,0.00000000,179.99450684); //object(cj_pizza_chair4) (3)
	CreateDynamicObject(2808,1968.44238281,-364.26171875,1092.59191895,0.00000000,0.00000000,179.99450684); //object(cj_pizza_chair4) (4)
	CreateDynamicObject(2808,1961.85546875,-364.26171875,1092.59191895,0.00000000,0.00000000,179.99450684); //object(cj_pizza_chair4) (5)
	CreateDynamicObject(2808,1966.27246094,-364.26171875,1092.59191895,0.00000000,0.00000000,179.99450684); //object(cj_pizza_chair4) (6)
	CreateDynamicObject(2868,1962.14697266,-370.30624390,1093.53430176,0.00000000,0.00000000,0.00000000); //object(gb_ornament03) (4)
	CreateDynamicObject(948,1966.09277344,-374.17285156,1092.72888184,0.00000000,0.00000000,0.00000000); //object(plant_pot_10) (1)
	CreateDynamicObject(948,1961.96313477,-374.22888184,1092.72888184,0.00000000,0.00000000,0.00000000); //object(plant_pot_10) (2)
	CreateDynamicObject(2894,1963.95080566,-370.94277954,1093.53430176,0.00000000,0.00000000,0.00000000); //object(kmb_rhymesbook) (1)
	CreateDynamicObject(3462,1959.30407715,-374.06838989,1094.24255371,0.00000000,0.00000000,270.00000000); //object(csrangel_lvs) (1)
	CreateDynamicObject(3462,1968.78125000,-374.06835938,1094.24255371,0.00000000,0.00000000,270.00000000); //object(csrangel_lvs) (2)
	CreateDynamicObject(949,1956.02258301,-353.46194458,1095.83190918,0.00000000,0.00000000,0.00000000); //object(plant_pot_4) (1)
	CreateDynamicObject(2946,1965.59985352,-349.21301270,1091.94543457,0.00000000,0.00000000,90.00000000); //object(cr_door_03) (2)
	CreateDynamicObject(2946,1962.47033691,-349.19955444,1091.94543457,0.00000000,0.00000000,270.00000000); //object(cr_door_03) (3)
	CreateDynamicObject(2808,1970.60681152,-360.67248535,1092.59191895,0.00000000,0.00000000,179.99450684); //object(cj_pizza_chair4) (6)
	CreateDynamicObject(2808,1968.43054199,-360.67248535,1092.59191895,0.00000000,0.00000000,179.99450684); //object(cj_pizza_chair4) (6)
	CreateDynamicObject(2808,1966.25378418,-360.67248535,1092.59191895,0.00000000,0.00000000,179.99450684); //object(cj_pizza_chair4) (6)
	CreateDynamicObject(2808,1957.52233887,-360.67248535,1092.59191895,0.00000000,0.00000000,179.99450684); //object(cj_pizza_chair4) (6)
	CreateDynamicObject(2808,1959.69580078,-360.67248535,1092.59191895,0.00000000,0.00000000,179.99450684); //object(cj_pizza_chair4) (6)
	CreateDynamicObject(2808,1961.86865234,-360.67248535,1092.59191895,0.00000000,0.00000000,179.99450684); //object(cj_pizza_chair4) (6)
	CreateDynamicObject(2808,1957.51660156,-357.18194580,1092.59191895,0.00000000,0.00000000,179.99450684); //object(cj_pizza_chair4) (6)
	CreateDynamicObject(2808,1959.69250488,-357.18194580,1092.59191895,0.00000000,0.00000000,179.99450684); //object(cj_pizza_chair4) (6)
	CreateDynamicObject(2808,1961.86779785,-357.18194580,1092.59191895,0.00000000,0.00000000,179.99450684); //object(cj_pizza_chair4) (6)
	CreateDynamicObject(2808,1970.61279297,-357.18194580,1092.59191895,0.00000000,0.00000000,179.99450684); //object(cj_pizza_chair4) (6)
	CreateDynamicObject(2808,1968.43701172,-357.18194580,1092.59191895,0.00000000,0.00000000,179.99450684); //object(cj_pizza_chair4) (6)
	CreateDynamicObject(2808,1966.26782227,-357.18194580,1092.59191895,0.00000000,0.00000000,179.99450684); //object(cj_pizza_chair4) (6)
	CreateDynamicObject(14705,1962.68139648,-373.67498779,1093.91894531,0.00000000,0.00000000,0.00000000); //object(int2vase) (1)
	CreateDynamicObject(14410,1968.61401367,-349.16000366,1092.01757812,0.00000000,0.00000000,270.00000000); //object(carter-stairs03) (1)
	CreateDynamicObject(11472,1971.98046875,-351.97091675,1092.19567871,0.00000000,0.00000000,90.00000000); //object(des_swtstairs1) (6)
	CreateDynamicObject(11472,1971.98046875,-353.19616699,1092.19567871,0.00000000,0.00000000,90.00000000); //object(des_swtstairs1) (7)
	CreateDynamicObject(14410,1959.47412109,-349.41287231,1092.01660156,0.00000000,0.00000000,90.00000000); //object(carter-stairs03) (2)
	CreateDynamicObject(11472,1956.10046387,-351.96487427,1092.19567871,0.00000000,0.00000000,270.00000000); //object(des_swtstairs1) (8)
	CreateDynamicObject(11472,1956.10046387,-353.19616699,1092.19567871,0.00000000,0.00000000,270.00000000); //object(des_swtstairs1) (9)
	CreateDynamicObject(11472,1965.10974121,-347.94531250,1095.44091797,0.00000000,90.00000000,180.00000000); //object(des_swtstairs1) (10)
	CreateDynamicObject(11472,1962.98315430,-347.94104004,1095.44018555,0.00000000,270.00000000,179.99450684); //object(des_swtstairs1) (11)
	CreateDynamicObject(1698,1962.46606445,-352.53399658,1095.31420898,0.00000000,0.00000000,270.27026367); //object(esc_step8) (1)
	CreateDynamicObject(1698,1962.87316895,-352.53399658,1095.53918457,0.00000000,0.00000000,270.26916504); //object(esc_step8) (2)
	CreateDynamicObject(1698,1963.24682617,-352.53399658,1095.76416016,0.00000000,0.00000000,270.26916504); //object(esc_step8) (3)
	CreateDynamicObject(1698,1965.60021973,-352.53399658,1095.31420898,0.00000000,0.00000000,90.00000000); //object(esc_step8) (4)
	CreateDynamicObject(1698,1965.20434570,-352.53399658,1095.53918457,0.00000000,0.00000000,90.00000000); //object(esc_step8) (5)
	CreateDynamicObject(1698,1964.72375488,-352.53399658,1095.76416016,0.00000000,0.00000000,270.26916504); //object(esc_step8) (6)
	CreateDynamicObject(970,1964.05688477,-353.88497925,1096.74243164,0.00000000,0.00000000,0.00000000); //object(fencesmallb) (4)
	CreateDynamicObject(970,1959.94470215,-353.88497925,1095.74719238,0.00000000,0.00000000,0.00000000); //object(fencesmallb) (4)
	CreateDynamicObject(970,1955.77246094,-353.88589478,1095.74719238,0.00000000,0.00000000,0.00000000); //object(fencesmallb) (4)
	CreateDynamicObject(970,1968.17297363,-353.88497925,1095.74719238,0.00000000,0.00000000,0.00000000); //object(fencesmallb) (4)
	CreateDynamicObject(970,1972.25000000,-353.88589478,1095.74719238,0.00000000,0.00000000,0.00000000); //object(fencesmallb) (4)
	CreateDynamicObject(970,1959.97607422,-351.29064941,1095.74719238,0.00000000,0.00000000,0.00000000); //object(fencesmallb) (4)
	CreateDynamicObject(970,1968.10302734,-351.29064941,1095.74719238,0.00000000,0.00000000,0.00000000); //object(fencesmallb) (4)
	CreateDynamicObject(970,1965.96203613,-349.21618652,1096.74169922,0.00000000,0.00000000,90.00000000); //object(fencesmallb) (4)
	CreateDynamicObject(970,1962.13757324,-349.21618652,1096.74243164,0.00000000,0.00000000,90.00000000); //object(fencesmallb) (4)
	CreateDynamicObject(2887,1964.04821777,-349.34906006,1094.78955078,90.00000000,0.00000000,0.00000000); //object(a51_spotbulb) (1)
	CreateDynamicObject(949,1971.95068359,-353.46038818,1095.83190918,0.00000000,0.00000000,0.00000000); //object(plant_pot_4) (2)
	CreateDynamicObject(948,1965.68554688,-352.45767212,1091.94543457,0.00000000,0.00000000,0.00000000); //object(plant_pot_10) (1)
	CreateDynamicObject(948,1962.38427734,-352.45767212,1091.94543457,0.00000000,0.00000000,0.00000000); //object(plant_pot_10) (1)
	CreateDynamicObject(1742,1955.84399414,-353.83831787,1091.94543457,0.00000000,0.00000000,0.00000000); //object(med_bookshelf) (1)
	CreateDynamicObject(1742,1957.28173828,-353.83831787,1091.94543457,0.00000000,0.00000000,0.00000000); //object(med_bookshelf) (2)
	CreateDynamicObject(1742,1958.71166992,-353.83831787,1091.94543457,0.00000000,0.00000000,0.00000000); //object(med_bookshelf) (3)
	CreateDynamicObject(1742,1960.15112305,-353.83831787,1091.94543457,0.00000000,0.00000000,0.00000000); //object(med_bookshelf) (4)
	CreateDynamicObject(1742,1971.77673340,-353.83831787,1091.94543457,0.00000000,0.00000000,0.00000000); //object(med_bookshelf) (5)
	CreateDynamicObject(1742,1970.34277344,-353.83831787,1091.94543457,0.00000000,0.00000000,0.00000000); //object(med_bookshelf) (6)
	CreateDynamicObject(1742,1968.90930176,-353.83831787,1091.94543457,0.00000000,0.00000000,0.00000000); //object(med_bookshelf) (7)
	CreateDynamicObject(1742,1967.47534180,-353.83831787,1091.94543457,0.00000000,0.00000000,0.00000000); //object(med_bookshelf) (8)
	CreateDynamicObject(949,1961.60729980,-354.34103394,1092.58166504,0.00000000,0.00000000,0.00000000); //object(plant_pot_4) (3)
	CreateDynamicObject(949,1966.46325684,-354.34805298,1092.58166504,0.00000000,0.00000000,0.00000000); //object(plant_pot_4) (4)
	CreateDynamicObject(1720,1970.09338379,-373.59497070,1092.72888184,0.00000000,0.00000000,180.00000000); //object(rest_chair) (1)
	CreateDynamicObject(1720,1970.91198730,-373.58316040,1092.72888184,0.00000000,0.00000000,179.99450684); //object(rest_chair) (2)
	CreateDynamicObject(741,1969.29675293,-369.22723389,1093.71252441,0.00000000,0.00000000,0.00000000); //object(pot_01) (1)
	CreateDynamicObject(3440,1969.29125977,-370.86264038,1091.08007812,0.00000000,0.00000000,0.00000000); //object(arptpillar01_lvs) (1)
	CreateDynamicObject(14455,1955.32812500,-348.54144287,1096.87585449,0.00000000,0.00000000,270.00000000); //object(gs_bookcase) (1)
	CreateDynamicObject(14455,1972.78356934,-352.90487671,1096.86743164,0.00000000,0.00000000,90.00000000); //object(gs_bookcase) (2)
	CreateDynamicObject(2842,1964.51916504,-365.60891724,1091.94543457,0.00000000,0.00000000,90.00000000); //object(gb_bedrug04) (1)
	CreateDynamicObject(2842,1964.51843262,-363.77880859,1091.94543457,0.00000000,0.00000000,90.00000000); //object(gb_bedrug04) (2)
	CreateDynamicObject(2842,1964.51867676,-361.94879150,1091.94543457,0.00000000,0.00000000,90.00000000); //object(gb_bedrug04) (3)
	CreateDynamicObject(2842,1964.52172852,-360.12713623,1091.94543457,0.00000000,0.00000000,90.00000000); //object(gb_bedrug04) (4)
	CreateDynamicObject(2842,1964.52636719,-358.30560303,1091.94543457,0.00000000,0.00000000,90.00000000); //object(gb_bedrug04) (5)
	CreateDynamicObject(2842,1964.52600098,-356.47940063,1091.94543457,0.00000000,0.00000000,90.00000000); //object(gb_bedrug04) (6)
	CreateDynamicObject(2842,1964.52343750,-354.64611816,1091.94543457,0.00000000,0.00000000,90.00000000); //object(gb_bedrug04) (7)
	CreateDynamicObject(2842,1964.52136230,-352.82815552,1091.94543457,0.00000000,0.00000000,90.00000000); //object(gb_bedrug04) (8)
	CreateDynamicObject(2842,1964.51867676,-350.99310303,1091.94543457,0.00000000,0.00000000,90.00000000); //object(gb_bedrug04) (9)
	CreateDynamicObject(2842,1964.52026367,-349.16046143,1091.94543457,0.00000000,0.00000000,90.00000000); //object(gb_bedrug04) (10)
	CreateDynamicObject(2833,1963.55749512,-369.65057373,1092.72888184,0.00000000,0.00000000,0.00000000); //object(gb_livingrug02) (1)
	CreateDynamicObject(2834,1968.81579590,-372.52481079,1092.72888184,0.00000000,0.00000000,0.00000000); //object(gb_livingrug03) (1)
	CreateDynamicObject(6959,1951.26586914,-360.22650146,1095.56030273,310.00000000,180.00000000,90.00000000); //object(vegasnbball1) (1)
	CreateDynamicObject(6959,1976.87695312,-356.75421143,1095.51965332,310.00000000,180.00000000,270.00000000); //object(vegasnbball1) (3)
	CreateDynamicObject(6959,1958.95715332,-378.23306274,1096.33813477,309.99572754,179.99450684,180.00000000); //object(vegasnbball1) (4)

	//barreras allhambra
	CreateDynamicObject(968, 1951.79919, -1620.40283, 7.54780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(968, 1951.77466, -1621.14673, 7.54780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(968, 1951.75281, -1622.01233, 7.54780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(968, 1951.71143, -1622.73364, 7.54780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(968, 1951.71790, -1623.40112, 7.54780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(968, 1951.77258, -1624.15613, 7.54780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(968, 1951.70251, -1624.93384, 7.54780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(968, 1991.45898, -1620.36340, 7.54780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(968, 1991.42017, -1621.15283, 7.54780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(968, 1991.45337, -1621.88257, 7.54780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(968, 1991.50732, -1622.59790, 7.54780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(968, 1991.46289, -1623.26917, 7.54780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(968, 1991.47144, -1624.10718, 7.54780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(968, 1991.46680, -1624.74719, 7.54780,   0.00000, 0.00000, 0.00000);


	//gaso RP by handa
	CreateDynamicObject(19966, 1696.41064, -1740.55151, 12.54322,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19966, 1682.34167, -1723.79504, 12.54460,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19966, 1537.83838, -1725.31677, 12.54380,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19966, 1382.34509, -1742.36536, 12.54778,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19966, 1319.63416, -1741.11890, 12.54336,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19966, 1322.40857, -1566.41614, 12.54800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(638, 1951.61243, -1764.35156, 13.24000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, 1951.61182, -1767.75500, 13.24000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, 1951.61963, -1771.36890, 13.24000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, 1951.62476, -1775.15796, 13.24000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1952.02539, -1775.22388, 13.00590,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1952.03333, -1771.06177, 13.00590,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1952.03564, -1766.92761, 13.00590,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1952.03027, -1764.17285, 13.00590,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1951.24536, -1775.22388, 13.00590,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1951.25330, -1771.06177, 13.00590,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1951.25562, -1766.92761, 13.00590,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1951.25024, -1764.17285, 13.00590,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1214, 1951.62012, -1777.32874, 12.54593,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 1951.62073, -1762.21606, 12.54590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19124, 1951.60864, -1766.01990, 13.09031,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19124, 1941.64148, -1781.23425, 12.91030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19124, 1951.61023, -1773.27844, 13.09030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1925.00269, -1762.31262, 13.00410,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1921.74207, -1762.29846, 13.00410,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 1919.23169, -1762.28748, 12.54777,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 1931.64746, -1767.07642, 12.54780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1929.18005, -1762.31274, 13.00410,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 1931.58545, -1762.31995, 12.54777,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1931.68567, -1764.66748, 13.00410,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19124, 1951.64893, -1769.52551, 13.09030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19124, 1941.66321, -1764.71497, 12.91030,   0.00000, 0.00000, 0.00000);
	//int sata by vulk
	CreateDynamicObject(8419, 1771.53442, -1583.74060, 1734.46643,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19456, 1770.64795, -1544.85156, 1747.94141,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19456, 1780.18970, -1544.85156, 1747.94141,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19456, 1761.01367, -1544.85156, 1747.94141,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19456, 1763.77979, -1548.33630, 1747.94141,   0.00000, 0.00000, -45.00000);
	CreateDynamicObject(19456, 1783.39966, -1548.62231, 1747.94141,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 1767.52515, -1544.91833, 1746.19104,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 1770.52185, -1544.91833, 1746.19104,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3578, 1769.00439, -1543.59839, 1745.41003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3578, 1773.86865, -1559.30371, 1745.41003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19456, 1773.02649, -1548.63464, 1747.94141,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3578, 1769.00439, -1553.89282, 1745.41003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3578, 1784.05029, -1559.30371, 1745.41003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19304, 1781.55945, -1553.41272, 1749.29956,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19303, 1782.44336, -1553.41272, 1747.43225,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19456, 1776.67664, -1548.62195, 1747.94141,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19364, 1778.21851, -1553.35425, 1747.94141,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19456, 1779.73499, -1548.62231, 1747.94141,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19303, 1775.73474, -1553.41272, 1747.43225,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19304, 1774.86475, -1553.41272, 1749.29956,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19456, 1783.39966, -1558.25354, 1747.94141,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19456, 1777.81128, -1548.34814, 1747.94141,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19456, 1787.37134, -1548.34814, 1747.94141,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19456, 1783.39966, -1567.62170, 1747.94141,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19456, 1762.56616, -1553.96252, 1747.94141,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19456, 1762.56616, -1562.87231, 1747.94141,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19456, 1765.78394, -1566.22327, 1747.94141,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19456, 1775.25623, -1566.22327, 1747.94141,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19456, 1784.71973, -1566.22327, 1747.94141,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1280, 1781.26038, -1565.32813, 1746.59961,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1280, 1778.45923, -1565.32813, 1746.59961,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2009, 1774.63550, -1563.96082, 1746.18433,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2009, 1770.87524, -1563.96082, 1746.18433,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1806, 1775.89148, -1564.46875, 1746.18884,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1806, 1771.97791, -1564.46875, 1746.18884,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2384, 1770.78662, -1562.93237, 1746.99487,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2384, 1774.50989, -1562.92090, 1746.99463,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1538, 1762.68945, -1564.06348, 1746.14026,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8419, 1771.53442, -1583.74060, 1761.40564,   180.00000, 0.00000, 0.00000);


	//ext sata by handa

	CreateDynamicObject(4079, 1886.18750, -2221.20166, 25.32780,   0.00000, 0.00000, 57.00000);
	CreateDynamicObject(3998, 1931.58057, -2249.28052, 18.87190,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(4189, 1900.39832, -2219.10132, 17.13150,   0.00000, 0.00000, 62.00000);
	CreateDynamicObject(3998, 1892.56396, -2278.36011, 18.87190,   0.00000, 0.00000, 10.00000);
	CreateDynamicObject(9625, 1880.01245, -2184.77856, 14.53910,   0.00000, 0.00000, 102.00000);
	CreateDynamicObject(1290, 1950.56494, -2207.75513, 18.42188,   3.14159, 0.00000, 1.58724);
	CreateDynamicObject(1290, 1979.40454, -2207.98950, 18.42188,   3.14159, 0.00000, 1.58724);
	CreateDynamicObject(19463, 1758.63440, -2063.48486, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1959.65137, -2261.65454, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1983.60938, -2266.42358, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1899.52100, -2257.24854, 16.02050,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1968.14990, -2261.62427, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 2088.50171, -2260.34814, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1978.85339, -2261.64087, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1983.60730, -2276.02759, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1983.60571, -2285.68164, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1899.51917, -2257.68921, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1983.60803, -2266.83032, 16.02050,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1983.60071, -2277.17700, 16.02050,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1983.56702, -2287.53955, 16.02050,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1983.56555, -2295.21753, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1983.55481, -2297.85889, 16.02050,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1983.55835, -2304.77539, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1978.38904, -2313.41895, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1983.56628, -2308.61914, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1978.67529, -2313.32788, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1983.54834, -2308.21851, 16.02050,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1969.12573, -2313.34302, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1959.51282, -2313.35474, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1968.01990, -2313.41406, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1947.25171, -2323.76831, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1952.40723, -2318.08936, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1957.32178, -2313.34839, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1879.98022, -2318.58423, 16.02050,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1947.52356, -2323.76953, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1952.41418, -2319.04346, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1957.63818, -2313.40039, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1937.87976, -2323.78101, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1936.89038, -2323.76416, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1928.22339, -2323.80225, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1918.58643, -2323.79492, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1909.02246, -2323.78052, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1926.51465, -2323.76318, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1916.15137, -2323.77197, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1905.80481, -2323.78345, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1899.47278, -2323.78027, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1895.45300, -2323.77881, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1889.84814, -2323.75098, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1775.19165, -2270.66626, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1879.96729, -2318.84741, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1884.70447, -2323.74585, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1879.98254, -2309.22729, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1879.98975, -2299.57983, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1952.43408, -2318.59155, 16.02050,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1879.96301, -2308.24829, 16.02050,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1879.99829, -2297.92163, 16.02050,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1884.78967, -2292.71899, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1880.00195, -2297.52344, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1885.10144, -2323.76685, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1957.41138, -2261.65454, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1897.47144, -2261.50513, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1957.83972, -2261.62427, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19616, 1904.46045, -2301.06641, 17.34400,   0.00000, 0.00000, -316.00000);
	CreateDynamicObject(19616, 1904.14111, -2278.71338, 17.16400,   0.00000, 0.00000, -316.00000);
	CreateDynamicObject(3279, 1877.33606, -2326.23242, 12.53992,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3279, 1956.82166, -2317.66797, 12.53992,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3279, 1977.32837, -2254.38184, 12.53992,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19121, 1877.15942, -2326.42969, 29.15170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19121, 1977.46875, -2254.62720, 29.15170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2887, 1931.01184, -2260.38916, 35.99580,   -19.00000, 0.00000, 180.00000);
	CreateDynamicObject(2888, 1931.03259, -2260.48364, 35.91570,   -19.00000, 0.00000, 180.00000);
	CreateDynamicObject(2889, 1930.97131, -2260.32495, 35.95490,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2889, 1956.54541, -2317.98218, 32.42930,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2888, 1956.54541, -2317.88721, 32.45720,   -19.00000, 0.00000, 0.00000);
	CreateDynamicObject(2887, -3710.08936, -10672.09277, 663.05054,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2887, 1956.52954, -2318.25659, 32.53610,   -19.00000, 0.00000, 2.00000);
	CreateDynamicObject(3629, 2005.69006, -2285.64624, 17.77800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3629, 2049.83228, -2285.67139, 17.77800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1969.28015, -2261.62817, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 2086.40039, -2260.36890, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 2088.87549, -2260.36353, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1978.48987, -2261.62427, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 2072.02441, -2187.71680, 16.02050,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1214, 2082.85913, -2260.49072, 15.91920,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14791, 1942.09900, -2289.79590, 14.59440,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3819, 1941.78516, -2283.37085, 13.55520,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3819, 1934.61304, -2290.50757, 13.55520,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3819, 1949.31396, -2290.54492, 13.55520,   0.00000, 0.00000, 360.00000);
	CreateDynamicObject(3819, 1941.51099, -2297.53076, 13.55520,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2627, 1982.31714, -2272.49023, 12.53820,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2627, 1982.37244, -2274.39453, 12.53820,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2627, 1982.44348, -2276.24390, 12.53820,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2630, 1982.39587, -2278.77759, 12.54280,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2630, 1982.40747, -2280.72729, 12.54280,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2630, 1982.40198, -2282.68677, 12.54280,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2629, 1982.43030, -2284.92847, 12.54350,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2629, 1982.43958, -2287.44458, 12.54350,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2629, 1982.42761, -2289.66553, 12.54350,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2631, 1975.79919, -2273.14941, 12.54380,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2631, 1975.94446, -2281.11279, 12.54380,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2631, 1976.14063, -2288.57983, 12.54380,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1945, 1982.98425, -2283.98682, 12.58920,   -91.00000, -25.00000, -18.00000);
	CreateDynamicObject(1945, 1983.01062, -2285.94092, 12.58920,   -91.00000, -25.00000, -18.00000);
	CreateDynamicObject(1945, 1983.02222, -2286.56567, 12.58920,   -91.00000, -25.00000, -18.00000);
	CreateDynamicObject(1945, 1982.95679, -2288.33618, 12.58920,   -91.00000, -25.00000, -18.00000);
	CreateDynamicObject(1945, 1982.97791, -2288.89307, 12.58920,   -91.00000, -25.00000, -18.00000);
	CreateDynamicObject(1945, 1982.93958, -2290.43262, 12.58920,   -91.00000, -25.00000, -18.00000);
	CreateDynamicObject(19463, 2076.77759, -2260.37061, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 2072.03125, -2246.13940, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 2071.97949, -2244.31982, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 2072.01855, -2217.61304, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 2071.99780, -2207.93262, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 2072.00830, -2198.39209, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 2072.00806, -2188.79321, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 2072.05347, -2186.18896, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 2077.14624, -2260.35864, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 2071.99268, -2198.10181, 16.02050,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 2071.98682, -2208.49341, 16.02050,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 2071.94409, -2218.93530, 16.02050,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 2071.96167, -2244.77075, 16.02050,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 2071.98730, -2255.08984, 16.02050,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 2072.01367, -2219.46289, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 2072.04883, -2255.62744, 14.29800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1907.11133, -2261.50317, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1906.76550, -2261.51538, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1854.94617, -2230.74585, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1864.54272, -2230.76978, 14.29800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1855.36060, -2230.72705, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1779.21790, -2274.95337, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1885.13232, -2292.73877, 16.02050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1865.69739, -2230.75635, 16.02050,   0.00000, 0.00000, 0.00000);

	//int fd by handa
	CreateDynamicObject(8419, -25.25431, 410.78986, 1008.67059,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19445, -19.48280, 381.50470, 1019.34473,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19445, -17.37399, 378.58051, 1022.14471,   0.00000, 0.00000, 55.00000);
	CreateDynamicObject(19445, -32.57827, 366.79324, 1022.14471,   0.00000, 0.00000, 55.00000);
	CreateDynamicObject(19445, -33.95486, 371.06274, 1022.14471,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19445, -30.69069, 378.07373, 1022.14471,   0.00000, 0.00000, -55.00000);
	CreateDynamicObject(19445, -15.86918, 366.66162, 1022.14471,   0.00000, 0.00000, -55.00000);
	CreateDynamicObject(19445, -24.26488, 380.86798, 1022.14471,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19375, -26.95924, 376.24023, 1023.80847,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19445, -24.16947, 364.18204, 1022.14471,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2169, -19.61112, 364.60831, 1020.33081,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2169, -19.61108, 366.53006, 1020.33081,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2169, -19.61360, 368.39371, 1020.33081,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2169, -19.61200, 379.07199, 1020.33081,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2169, -19.59850, 372.98849, 1020.65082,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(19357, -19.36590, 372.16431, 1019.35852,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -19.37020, 369.00620, 1019.35852,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -19.36440, 365.80829, 1019.35852,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19445, -14.05965, 371.65787, 1022.14471,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19466, -20.06848, 370.41440, 1022.05908,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19466, -20.07490, 368.27081, 1022.05908,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19466, -20.08580, 366.23160, 1022.05908,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19466, -20.10460, 364.42789, 1022.06293,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2169, -19.61350, 372.27240, 1020.33081,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19466, -20.07670, 372.64731, 1022.05908,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1714, -18.32950, 365.88040, 1020.39587,   0.00000, 0.00000, -114.00000);
	CreateDynamicObject(1714, -17.99640, 367.83881, 1020.39587,   0.00000, 0.00000, -92.00000);
	CreateDynamicObject(1714, -18.02639, 370.16672, 1020.39587,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1714, -18.44083, 372.10995, 1020.39587,   0.00000, 0.00000, -68.00000);
	CreateDynamicObject(2008, -15.74913, 375.09686, 1020.31830,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2008, -15.65795, 371.86005, 1020.31830,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2165, -15.68529, 368.72205, 1020.39862,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1714, -14.75032, 372.63675, 1020.39587,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1714, -14.75820, 375.84457, 1020.39587,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1714, -14.67632, 369.38367, 1020.39587,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2169, -19.60790, 370.34000, 1020.33081,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2169, -19.60060, 377.42670, 1019.63080,   0.00000, -90.00000, 90.00000);
	CreateDynamicObject(19445, -20.01630, 368.92191, 1019.34473,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19445, -20.00450, 381.49670, 1019.34473,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2169, -19.60590, 377.13199, 1020.33081,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19466, -20.09140, 377.78049, 1022.05908,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19466, -20.08870, 380.00409, 1022.05908,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -20.19240, 378.24261, 1024.74866,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -20.20209, 381.46173, 1024.74866,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -20.19150, 375.03189, 1024.74866,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -20.19610, 371.83881, 1024.74866,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -32.29770, 368.93839, 1025.62854,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19378, -25.36230, 368.85129, 1020.31110,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19378, -25.34107, 378.42969, 1020.31110,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19378, -35.83360, 378.41031, 1020.31110,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19378, -35.84690, 368.84799, 1020.31110,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19449, -32.30310, 374.03860, 1020.64789,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19449, -24.28800, 380.87100, 1025.64795,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19449, -30.71460, 378.09271, 1025.64795,   0.00000, 0.00000, -55.00000);
	CreateDynamicObject(19449, -32.58229, 366.78732, 1025.64795,   0.00000, 0.00000, 55.00000);
	CreateDynamicObject(19449, -24.13904, 364.15643, 1025.64795,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8614, -33.20580, 373.34351, 1022.65808,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19449, -25.58800, 366.00949, 1025.64795,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19375, -26.95381, 366.62491, 1023.80847,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19375, -16.45484, 366.61572, 1023.80847,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19375, -16.49343, 376.21683, 1023.80847,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19378, -14.85730, 377.87839, 1020.31110,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19378, -14.96260, 368.44778, 1020.31110,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19449, -32.30310, 374.03860, 1022.14789,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -20.21682, 365.43866, 1024.74866,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19449, -33.96592, 371.59384, 1025.64795,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19449, -28.80674, 366.00507, 1025.64795,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19387, -27.12268, 370.72342, 1025.64795,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1502, -27.89720, 370.70929, 1023.89423,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -20.21680, 365.43869, 1028.20874,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -20.20600, 368.64969, 1028.20874,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -20.19610, 371.83881, 1028.20874,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -20.19150, 375.03189, 1028.20874,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -20.19240, 378.24261, 1028.20874,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -20.20210, 381.46170, 1028.20874,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19387, -23.91223, 370.74692, 1025.64795,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1502, -24.70840, 370.73099, 1023.89423,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19449, -17.51501, 370.74713, 1025.64795,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1714, -22.01486, 364.83484, 1023.89447,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2008, -22.29528, 366.15027, 1023.91937,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19807, -21.98411, 365.99475, 1024.75854,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2202, -20.80400, 369.40726, 1023.89612,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2164, -25.46146, 367.07108, 1023.87671,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2163, -25.54789, 367.07062, 1026.26074,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2002, -28.18031, 367.48871, 1023.89490,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2001, -25.20687, 370.38849, 1023.89673,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2001, -20.55322, 370.43979, 1023.89673,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2811, -20.62471, 364.52063, 1023.80078,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11737, -23.99370, 370.03302, 1023.89331,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1713, -23.93591, 377.32657, 1023.89349,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14804, -25.66767, 371.44254, 1024.73364,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(14804, -29.63278, 365.44501, 1024.73364,   0.00000, 0.00000, -36.00000);
	CreateDynamicObject(1713, -29.29025, 369.33649, 1023.89349,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1713, -20.71430, 375.89630, 1023.89349,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1827, -21.70345, 378.05524, 1023.89404,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2245, -21.62451, 378.07724, 1024.51807,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11729, -25.87244, 370.26196, 1023.89520,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, -25.84347, 368.89255, 1023.89520,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, -25.91471, 367.49176, 1023.89520,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, -25.91077, 365.94229, 1023.89520,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, -25.98792, 364.56525, 1023.89520,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1368, -28.28103, 365.54742, 1024.45471,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, -28.29843, 369.50455, 1024.45471,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2002, -25.08998, 364.67416, 1023.89490,   0.00000, 0.00000, 138.00000);
	CreateDynamicObject(19331, -25.84830, 370.32751, 1026.04431,   -3.00000, -86.00000, 72.00000);
	CreateDynamicObject(19331, -25.82920, 368.91351, 1026.04431,   -3.00000, -86.00000, 112.00000);
	CreateDynamicObject(19331, -25.89650, 367.47821, 1026.04431,   -3.00000, -86.00000, 74.00000);
	CreateDynamicObject(19331, -25.91360, 365.93369, 1026.04431,   -3.00000, -86.00000, 108.00000);
	CreateDynamicObject(19331, -25.95250, 364.50629, 1026.04431,   -3.00000, -86.00000, 72.00000);
	CreateDynamicObject(3850, -32.32835, 372.24698, 1024.41626,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2184, -20.87189, 366.58884, 1023.89380,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1713, -22.38652, 380.27161, 1023.89349,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -20.20600, 368.64969, 1024.74866,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -32.32600, 365.71799, 1025.62854,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2161, -21.53700, 370.83160, 1025.05469,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19173, -30.88418, 377.83832, 1026.05127,   0.00000, 0.00000, 35.00000);
	CreateDynamicObject(19172, -28.10065, 379.80920, 1026.01465,   0.00000, 0.00000, 35.00000);
	CreateDynamicObject(2267, -32.17520, 368.40549, 1025.65039,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2183, -28.87664, 374.00668, 1023.89301,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1808, -29.56130, 378.63861, 1023.89288,   0.00000, 0.00000, 35.00000);
	CreateDynamicObject(2059, -26.73408, 374.24884, 1024.71838,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2059, -26.63424, 375.25668, 1024.71838,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2059, -28.78950, 374.31497, 1024.71838,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2059, -28.62967, 375.26508, 1024.71838,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, -24.72800, 364.22809, 1020.35779,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19172, -32.21490, 373.05649, 1022.24109,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2737, -27.45974, 364.34357, 1025.62598,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2614, -28.67210, 367.52240, 1026.34082,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1713, -25.75773, 364.63406, 1020.31519,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1713, -31.24902, 374.17508, 1020.31519,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1808, -31.40520, 372.99609, 1020.39532,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1827, -29.19806, 372.92087, 1020.39642,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2001, -28.81038, 364.48465, 1020.39642,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1713, -31.40652, 370.17752, 1020.31519,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1713, -29.92553, 365.49493, 1020.31519,   0.00000, 0.00000, 143.00000);
	CreateDynamicObject(2001, -26.46572, 380.52884, 1020.39642,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2161, -29.61300, 378.69949, 1021.40692,   0.00000, 0.00000, 36.00000);
	CreateDynamicObject(2161, -23.95660, 380.69531, 1021.40692,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2161, -23.95660, 380.69531, 1021.40692,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2267, -30.72569, 365.69769, 1022.69818,   0.00000, 0.00000, 143.00000);
	CreateDynamicObject(2202, -18.23553, 378.58609, 1020.39880,   0.00000, 0.00000, -36.00000);
	CreateDynamicObject(2002, -14.70100, 373.89981, 1020.39783,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2002, -14.72638, 370.41458, 1020.39783,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11713, -28.36023, 370.84650, 1025.39893,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2961, -21.87060, 370.61880, 1025.66296,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2258, -21.35643, 380.77094, 1022.47882,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2690, -28.37980, 370.87521, 1025.41956,   0.00000, 0.00000, 0.00000);
	new objetodemapeo99 = CreateDynamicObject(8419, -26.71040, 407.45129, 1039.75073,   181.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(objetodemapeo99, 0, -1, "none", "none", 0x000000FF);
	SetDynamicObjectMaterial(objetodemapeo99, 1, -1, "none", "none", 0x000000FF);
	SetDynamicObjectMaterial(objetodemapeo99, 2, -1, "none", "none", 0x000000FF);
	SetDynamicObjectMaterial(objetodemapeo99, 4, 14383, "burg_1", "mp_diner_woodwall", 0x00000000);
	new objetodemapeo98 = CreateDynamicObject(8419, -25.25430, 410.78989, 101.67060,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(objetodemapeo98, 0, -1, "none", "none", 0x000000FF);
	SetDynamicObjectMaterial(objetodemapeo98, 1, -1, "none", "none", 0x000000FF);
	SetDynamicObjectMaterial(objetodemapeo98, 2, -1, "none", "none", 0x000000FF);
	SetDynamicObjectMaterial(objetodemapeo98, 4, 14383, "burg_1", "mp_diner_woodwall", 0x00000000);
	
	//garaje de PD by handa 
	CreateDynamicObject(3055, -1636.25000, 688.11572, 8.17950,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3055, -1628.42969, 688.11462, 8.17950,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3055, -1626.86975, 688.11389, 8.17950,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3055, -1617.83191, 688.17676, 8.17950,   0.00000, 0.00000, 0.00000);

	//bomberos idlewood by handa
	new bomberostxt;
	bomberostxt = CreateDynamicObject(11008, 2121.14307, -1930.03101, 19.33430,   0.00000, 0.00000, 90.00000, -1, -1, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(bomberostxt, 3, -1, "none", "none", 0xFFFFFFFF);
	SetDynamicObjectMaterial(bomberostxt, 4, 10765, "airportgnd_sfse", "white", 0xFFFFFFFF);
	
	CreateDynamicObject(18981, 2104.00537, -1916.90186, 12.07000,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 2129.04004, -1916.92004, 12.07000,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 2129.04980, -1929.84167, 12.07000,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 2104.05005, -1929.81995, 12.07000,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(8674, 2112.42236, -1904.41931, 13.58000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 2091.55005, -1909.55005, 13.58000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 2091.55005, -1937.15002, 13.58000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 2091.55005, -1929.45996, 13.58000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 2096.71997, -1942.32996, 13.58000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 2107.03003, -1942.32996, 13.58000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 2117.32007, -1942.32996, 13.58000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 2127.62988, -1942.32996, 13.58000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 2135.35010, -1942.32996, 13.58000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(700, 2095.28003, -1945.06006, 12.67000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(700, 2100.78003, -1945.67004, 12.67000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(700, 2106.95996, -1945.02002, 12.67000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(700, 2113.34009, -1945.97998, 12.67000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(700, 2119.62988, -1945.00000, 12.67000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(700, 2125.63989, -1945.96997, 12.67000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(700, 2131.69995, -1944.56006, 12.67000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 2096.73999, -1904.38000, 13.58000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 2123.64331, -1904.46118, 13.58000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(10028, 2070.37109, -1912.37671, -10.18000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19399, 2093.28223, -1906.28918, 10.83520,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19399, 2113.97412, -1906.51697, 10.83520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19399, 2113.97998, -1908.18933, 10.83520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19399, 2116.97412, -1906.51697, 10.83520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19399, 2116.97998, -1908.18933, 10.83520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19399, 2119.97412, -1906.51697, 10.83520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19399, 2119.97998, -1908.18933, 10.83520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19399, 2122.97412, -1906.51697, 10.83520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19399, 2125.97998, -1908.18933, 10.83520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19399, 2125.97412, -1906.51697, 10.83520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19399, 2122.97998, -1908.18933, 10.83520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19399, 2129741.00000, -1906.51697, 10.83520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19399, 2095.34424, -1906.29419, 10.83520,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19399, 2093.28223, -1909.28918, 10.83520,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19399, 2095.34424, -1909.29419, 10.83520,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19399, 2093.28223, -1912.28918, 10.83520,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19399, 2095.34424, -1912.29419, 10.83520,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19399, 2095.79443, -1929.26636, 10.93520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19399, 2097.30713, -1927.56335, 10.93520,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19373, 2097.62476, -1929.26917, 12.48540,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(8674, 2103.64502, -1920.53687, 13.58000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19399, 2099.46997, -1929.27124, 10.93520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19399, 2097.95117, -1930.97363, 10.93520,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19399, 2097.29126, -1930.97363, 10.93520,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19399, 2097.94702, -1927.56335, 10.93520,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(700, 2097.45435, -1929.33447, 12.67000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19399, 2097.95117, -1940.97363, 10.93520,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19399, 2097.29126, -1940.97363, 10.93520,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19399, 2095.79443, -1939.26636, 10.93520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19399, 2099.46997, -1939.27124, 10.93520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19399, 2097.30713, -1937.56335, 10.93520,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19399, 2097.94702, -1937.56335, 10.93520,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19373, 2097.62476, -1939.26917, 12.48540,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(700, 2097.45435, -1939.33447, 12.67000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19399, 2097.94702, -192.56340, 10.93520,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 2091.54468, -1919.75122, 13.58000,   0.00000, 0.00000, 90.00000);

	//
	CreateDynamicObject(1569, 1525.44128, -1794.62830, 32.33950,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1569, 1564.51318, -1667.40295, 27.36700,   0.00000, 0.00000, 0.00000);
	//
	
	//barreras PF by handa 
	CreateDynamicObject(19463, 1983.77185, -2257.49658, 14.25500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1978.99170, -2230.77563, 14.25500,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1983.79834, -2249.93921, 14.25500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1983.84143, -2226.04517, 14.25500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1983.78186, -2243.49536, 14.25500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1969.45398, -2230.77051, 14.25500,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1959.87329, -2230.82031, 14.25500,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1950.28784, -2230.83813, 14.25500,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1940.68494, -2230.85303, 14.25500,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1931.04272, -2230.85083, 14.25500,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1921.40771, -2230.87256, 14.25500,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1911.82983, -2230.85010, 14.25500,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1902.19177, -2230.84790, 14.25500,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1892.71118, -2230.84082, 14.25500,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1883.16675, -2230.82251, 14.25500,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1873.59265, -2230.81982, 14.25500,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1864.03784, -2230.83447, 14.25500,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19463, 1854.91321, -2230.81738, 14.25500,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1978.69043, -2230.79321, 15.97950,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19463, 1983.88660, -2225.13159, 14.25500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1983.76794, -2243.95483, 15.97950,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1983.77722, -2254.34180, 15.97950,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1983.78076, -2264.68237, 15.97950,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1983.84534, -2225.57910, 15.97950,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8674, 1968.32410, -2230.77588, 15.97950,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1957.94360, -2230.80273, 15.97950,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1947.61792, -2230.80737, 15.97950,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1937.22852, -2230.80737, 15.97950,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1926.85559, -2230.81421, 15.97950,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1916.51501, -2230.81860, 15.97950,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1906.13892, -2230.82104, 15.97950,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1895.74805, -2230.79810, 15.97950,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1885.41699, -2230.80420, 15.97950,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1875.04565, -2230.80420, 15.97950,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1864.65039, -2230.79590, 15.97950,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1855.38745, -2230.80493, 15.97950,   0.00000, 0.00000, 0.00000);
	
	
	//estacionamiento gob by handa 
	CreateDynamicObject(966, 1400.74060, -1834.67053, 12.54550,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(966, 1559.34314, -1841.90393, 12.54320,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19464, 1500.50525, -1850.68420, 14.32380,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(9697, 1470.68835, -1844.03284, 12.52487,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9697, 1467.57263, -1844.66333, 12.52248,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9697, 1481.33484, -1844.19800, 12.56350,   0.00000, 0.00000, 180.00000);
	
	//int ayunta by handa
	new objetodemapeo2 = CreateDynamicObject(8419, 435.80875, 291.50095, 1006.47626,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(objetodemapeo2, 0, -1, "none", "none", 0x000000FF);
	SetDynamicObjectMaterial(objetodemapeo2, 1, -1, "none", "none", 0x000000FF);
	SetDynamicObjectMaterial(objetodemapeo2, 2, -1, "none", "none", 0x000000FF);
	SetDynamicObjectMaterial(objetodemapeo2, 4, 14383, "burg_1", "mp_diner_woodwall", 0x00000000);

	new objetodemapeo3 = CreateDynamicObject(8419, 435.80869, 291.50089, 1033.31226,   0.00000, 180.00000, 0.00000);
	SetDynamicObjectMaterial(objetodemapeo3, 0, -1, "none", "none", 0x000000FF);
	SetDynamicObjectMaterial(objetodemapeo3, 1, -1, "none", "none", 0x000000FF);
	SetDynamicObjectMaterial(objetodemapeo3, 2, -1, "none", "none", 0x000000FF);
	SetDynamicObjectMaterial(objetodemapeo3, 4, 14383, "burg_1", "mp_diner_woodwall", 0x00000000);
	
	new tmpobjid88;
	CreateDynamicObject(1557, 433.79950, 245.07339, 1018.19330,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1557, 436.77261, 245.07520, 1018.19330,   0.00000, 0.00000, -180.00000);
	tmpobjid88 = CreateDynamicObject(19450, 438.65527, 249.71700, 1019.87671,   0.00000, 0.00000, 180.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	tmpobjid88 = CreateDynamicObject(19450, 424.60825, 254.96104, 1019.87671,   0.00000, 0.00000, 180.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	tmpobjid88 = CreateDynamicObject(19450, 436.78510, 268.03110, 1019.87671,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	tmpobjid88 = CreateDynamicObject(19450, 449.44821, 263.24481, 1019.87671,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	tmpobjid88 = CreateDynamicObject(19450, 427.99744, 247.50243, 1019.87671,   0.00000, 0.00000, 46.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	tmpobjid88 = CreateDynamicObject(19450, 424.60818, 264.12100, 1019.87671,   0.00000, 0.00000, 180.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	tmpobjid88 = CreateDynamicObject(19450, 446.71381, 265.82309, 1019.87671,   0.00000, 0.00000, 180.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	tmpobjid88 = CreateDynamicObject(19450, 438.28146, 266.58054, 1019.87671,   0.00000, 0.00000, 46.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	tmpobjid88 = CreateDynamicObject(19450, 436.83691, 245.03880, 1019.87671,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	tmpobjid88 = CreateDynamicObject(19450, 446.67310, 251.97156, 1019.87671,   0.00000, 0.00000, 180.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	tmpobjid88 = CreateDynamicObject(19388, 440.25650, 254.44095, 1019.87671,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	tmpobjid88 = CreateDynamicObject(19450, 440.83691, 245.03880, 1019.87671,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	tmpobjid88 = CreateDynamicObject(19450, 446.26721, 254.44603, 1019.87671,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	tmpobjid88 = CreateDynamicObject(19388, 428.50037, 261.26227, 1019.87671,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	CreateDynamicObject(18755, 448.67490, 258.86310, 1020.14172,   0.00000, 0.00000, 0.00000);
	tmpobjid88 = CreateDynamicObject(19450, 430.85641, 245.03430, 1019.87671,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	tmpobjid88 = CreateDynamicObject(19388, 443.29950, 263.25391, 1019.87671,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	CreateDynamicObject(18070, 427.12756, 254.57062, 1018.69928,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1569, 429.64188, 267.97830, 1018.20178,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18070, 427.12759, 254.57060, 1021.01929,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1569, 439.48990, 254.47600, 1018.20178,   0.00000, 0.00000, 0.00000);
	tmpobjid88 = CreateDynamicObject(19450, 424.12531, 268.03110, 1019.87671,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	tmpobjid88 = CreateDynamicObject(19388, 430.39911, 268.03110, 1019.87671,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	tmpobjid88 = CreateDynamicObject(19450, 428.50711, 267.62671, 1019.87671,   0.00000, 0.00000, 180.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	CreateDynamicObject(1569, 442.52921, 263.21939, 1018.20178,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1502, 428.50751, 262.03101, 1018.20001,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2008, 428.81738, 255.19734, 1018.40332,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2190, 429.16550, 254.78835, 1019.20752,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(14401, 425.62320, 262.50940, 1018.20038,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14401, 425.61551, 267.55731, 1018.20038,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2167, 428.35413, 267.43063, 1018.19891,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2167, 428.35410, 266.37061, 1018.19891,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2167, 428.35410, 264.37061, 1018.19891,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2167, 428.35410, 263.37061, 1018.19891,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2614, 426.58020, 267.90921, 1020.34589,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1808, 428.10660, 265.40051, 1018.20282,   0.00000, 0.00000, -90.00000);
	tmpobjid88 = CreateDynamicObject(19450, 423.73563, 259.73993, 1019.87671,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(tmpobjid88, 0, 13007, "sw_bankint", "bank_wall1", 0x00000000);
	tmpobjid88 = CreateDynamicObject(15038, 428.12366, 262.41629, 1018.79529,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(948, 429.02548, 256.17981, 1019.20642,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2251, 428.88373, 251.70114, 1019.92639,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2894, 428.89670, 253.15596, 1019.20618,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2611, 426.45609, 259.87579, 1020.30902,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1714, 426.80264, 253.31596, 1018.20117,   0.00000, 0.00000, 360.00000);
	CreateDynamicObject(2165, 427.71799, 251.90511, 1018.44751,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2001, 430.03827, 258.10449, 1018.20209,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2001, 430.04083, 250.76819, 1018.20148,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2811, 425.35458, 258.97925, 1018.19995,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1703, 437.88342, 247.51126, 1018.20129,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1703, 445.98547, 255.09634, 1018.20129,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1738, 442.91052, 254.55963, 1018.85107,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1808, 441.68979, 254.76942, 1018.20129,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2195, 436.52762, 267.31534, 1018.76367,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1703, 435.59427, 263.07574, 1018.20129,   0.00000, 0.00000, 162.00000);
	CreateDynamicObject(1703, 437.17801, 266.68188, 1018.20129,   0.00000, 0.00000, -46.00000);
	CreateDynamicObject(2195, 428.94156, 267.56882, 1018.76367,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1703, 433.62921, 267.32550, 1018.20129,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1822, 434.93759, 264.80392, 1018.20020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1703, 437.89670, 253.60851, 1018.20129,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1738, 438.53140, 250.31149, 1018.85107,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1808, 438.32501, 248.64246, 1018.20129,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2195, 433.17868, 245.63086, 1018.76367,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2195, 446.23761, 262.73135, 1018.76367,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1893, 433.75049, 248.29080, 1021.52740,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1893, 433.82138, 255.14931, 1021.52740,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1893, 425.97672, 263.52390, 1021.52740,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1893, 434.23810, 265.64920, 1021.52740,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1714, 427.50720, 254.38730, 1018.20117,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(18756, 448.63181, 258.83371, 1020.11871,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18757, 448.64560, 258.81540, 1020.11871,   0.00000, 0.00000, 0.00000);


	//int pd
	//INTERIOR PD
	//piso
	new objetodemapeo1 = CreateDynamicObject(8419, 215.25761, 182.21677, 990.28101,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(objetodemapeo1, 0, -1, "none", "none", 0x000000FF);
	SetDynamicObjectMaterial(objetodemapeo1, 1, -1, "none", "none", 0x000000FF);
	SetDynamicObjectMaterial(objetodemapeo1, 2, -1, "none", "none", 0x000000FF);
	SetDynamicObjectMaterial(objetodemapeo1, 4, 14383, "burg_1", "mp_diner_woodwall", 0x00000000);
	//
	
	CreateDynamicObject(19378, 229.77991, 174.99030, 1005.56207,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(19378, 229.77991, 185.46291, 1005.56207,   0.00000, 90.00000, 90.00000);
	//techo
	new objetodemapeo;
	objetodemapeo = CreateDynamicObject(8419, 202.20320, 174.57719, 1017.19531,   0.00000, 180.00000, 0.00000);
	SetDynamicObjectMaterial(objetodemapeo, 0, -1, "none", "none", 0x000000FF);
	SetDynamicObjectMaterial(objetodemapeo, 1, -1, "none", "none", 0x000000FF);
	SetDynamicObjectMaterial(objetodemapeo, 2, -1, "none", "none", 0x000000FF);
	SetDynamicObjectMaterial(objetodemapeo, 4, 14383, "burg_1", "mp_diner_woodwall", 0x00000000);

	// int pd by vulk y handa
	CreateDynamicObject(1886, 233.37331, 159.81470, 1006.61029,   12.00000, 2.00000, 18.00000);
	CreateDynamicObject(1886, 293.17331, 180.85780, 1010.46729,   14.00000, 0.00000, -56.00000);
	CreateDynamicObject(1886, 238.28619, 184.55490, 1007.18109,   6.00000, 0.00000, 0.00000);
	CreateDynamicObject(19367, 263.56561, 190.09509, 1006.27020,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2614, 264.80911, 188.34441, 1009.27942,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19367, 262.04901, 185.18770, 1006.27020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19367, 262.04901, 188.40260, 1006.27020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19439, 264.15430, 188.41440, 1007.93091,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(19439, 262.89099, 188.42261, 1007.92908,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(19439, 262.86639, 185.35980, 1007.93091,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(19439, 264.15430, 185.35980, 1007.93091,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(2614, 264.80911, 184.85780, 1009.27942,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1722, 258.29999, 189.39070, 1007.17188,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1722, 264.78909, 188.82100, 1008.01190,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1722, 264.78909, 187.66000, 1008.01190,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1722, 264.79639, 185.29460, 1008.01190,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1722, 264.78909, 184.24770, 1008.01190,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1722, 258.29999, 187.76680, 1007.17188,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1722, 258.29999, 186.16310, 1007.17188,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1722, 258.29999, 184.57950, 1007.17188,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1722, 256.29999, 184.60049, 1007.17188,   0.00000, 0.00000, 269.94000);
	CreateDynamicObject(1722, 256.29999, 186.16310, 1007.17188,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1722, 256.29999, 187.76680, 1007.17188,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1722, 252.30000, 187.72681, 1007.17188,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1722, 252.30000, 189.33569, 1007.17188,   0.00000, 0.00000, 270.06000);
	CreateDynamicObject(1722, 254.30000, 189.40240, 1007.17188,   0.00000, 0.00000, 270.12000);
	CreateDynamicObject(1722, 254.30000, 187.76849, 1007.17188,   0.00000, 0.00000, 270.06000);
	CreateDynamicObject(1722, 254.30000, 186.22009, 1007.17188,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1722, 254.30000, 184.59550, 1007.17188,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1722, 252.30000, 184.59200, 1007.17188,   0.00000, 0.00000, 269.94000);
	CreateDynamicObject(1722, 252.30000, 186.18590, 1007.17188,   0.00000, 0.00000, 272.27991);
	CreateDynamicObject(1722, 256.29999, 189.41180, 1007.17188,   0.00000, 0.00000, 270.12000);
	CreateDynamicObject(2230, 263.02328, 186.84280, 1008.01489,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1722, 250.30000, 189.29649, 1007.17188,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1722, 250.31996, 187.68730, 1007.17188,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1722, 250.30000, 186.14349, 1007.17188,   0.00000, 0.00000, 272.27991);
	CreateDynamicObject(1722, 250.30000, 184.54671, 1007.17188,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1472, 262.05981, 184.43654, 1007.59302,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19611, 246.71019, 185.69716, 1007.17029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19611, 246.71021, 189.14510, 1007.17029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19623, 246.72130, 189.15440, 1008.81427,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19623, 246.72130, 185.68170, 1008.81427,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(18755, 205.07739, 168.06889, 1003.96460,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2167, 206.93800, 176.41220, 1002.02612,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19893, -5595.29785, -7287.32666, -2295.18994,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19893, 233.25146, 160.12218, 1003.02820,   0.00000, 0.00000, 240.00000);
	CreateDynamicObject(19893, 234.05920, 167.21880, 1003.02820,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19358, 228.22971, 144.82629, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 228.22971, 147.98981, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 228.22971, 141.62489, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 226.56160, 140.09441, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 223.36530, 140.09441, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 220.18820, 140.09441, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 214.64590, 146.46640, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 213.81540, 140.09441, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 210.63530, 140.09441, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14852, 191.36369, 140.38463, 1001.74872,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1703, 227.63327, 144.11125, 1002.02283,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1703, 226.40094, 140.77866, 1002.02283,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2241, 227.49060, 140.85899, 1002.52020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 219.37811, 141.71797, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 219.37810, 144.92200, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 216.98950, 140.09441, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19388, 217.84056, 146.46637, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 211.46680, 146.46640, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 211.19025, 144.88515, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 211.19020, 141.74370, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 207.45430, 140.09441, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 204.25330, 140.09441, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 208.28270, 146.46640, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19388, 205.07390, 146.46640, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 202.69566, 141.64537, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 202.69569, 144.84689, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 201.86121, 146.46640, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1703, 220.02573, 142.64079, 1002.02283,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2241, 220.06598, 141.14986, 1002.52020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2184, 236.61719, 111.01563, 1009.28125,   356.85840, 0.00000, -1.57080);
	CreateDynamicObject(2184, 216.27679, 143.10980, 1002.02240,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2184, 207.41629, 143.10983, 1002.02240,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1714, 206.29649, 140.65823, 1002.02283,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1714, 215.39833, 140.67972, 1002.02283,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2195, 203.27690, 140.56686, 1002.72009,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1827, 246.61607, 156.18016, 1002.01917,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2251, 224.97961, 143.63893, 1003.28998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2204, 211.03320, 144.48100, 1001.93842,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2007, 210.65591, 141.34952, 1002.02002,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2007, 218.80540, 141.22450, 1002.02002,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2204, 219.20390, 144.32870, 1001.93842,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19358, 228.22971, 154.38240, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 228.22290, 158.35960, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 228.22971, 164.25990, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 228.28979, 160.47060, 1002.03839,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19388, 228.22971, 161.23869, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 228.22971, 157.58859, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 228.22971, 167.28780, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 228.20628, 168.39960, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19388, 231.50290, 169.90260, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1569, 230.73930, 169.79510, 1002.03839,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 233.06630, 172.33960, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 229.82910, 169.90480, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19388, 231.49730, 169.86070, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1569, 230.72821, 169.95595, 1002.03839,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1808, 223.77744, 140.45763, 1002.00781,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1715, 214.24603, 144.66553, 1002.01801,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1715, 216.20332, 144.65553, 1002.01801,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1715, 206.99448, 144.68130, 1002.01801,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1715, 205.33740, 144.66237, 1002.01801,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 204.29601, 150.82599, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 202.69569, 148.01320, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 202.69287, 151.07750, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 207.38570, 150.82600, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 210.18060, 150.82600, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19388, 219.36250, 150.82600, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 212.04140, 150.82600, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2007, 214.15929, 151.45255, 1002.02002,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 202.69290, 154.16620, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 215.24083, 154.07362, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 213.55460, 152.39011, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 219.36050, 154.07359, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 220.89191, 152.49409, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 220.89191, 152.55409, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2165, 215.57820, 153.48579, 1001.96942,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1715, 214.11484, 152.95534, 1002.01801,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1722, 216.95842, 151.66760, 1002.12335,   0.00000, 0.00000, 60.83995);
	CreateDynamicObject(1722, 216.98080, 153.54451, 1002.12341,   0.00000, 0.00000, 110.00000);
	CreateDynamicObject(19358, 231.47321, 173.86630, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 233.06320, 171.38190, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 228.28320, 173.86630, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 225.80330, 173.86630, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 224.27100, 172.25800, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 224.27100, 162.69810, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 222.95050, 174.78365, 1003.78003,   0.00000, 0.00000, 55.00000);
	CreateDynamicObject(19388, 221.03551, 176.12410, 1003.78003,   0.00000, 0.00000, 55.00000);
	CreateDynamicObject(19358, 218.15750, 177.04623, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 219.75620, 178.59760, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 219.75620, 181.71001, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 219.75618, 184.92169, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 231.83170, 175.50250, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 224.15550, 175.06850, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 227.35330, 175.06850, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 230.52290, 175.06850, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 231.87430, 175.06850, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 231.83170, 178.68660, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 231.83170, 181.83160, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 231.83168, 185.01633, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 221.39230, 184.83701, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 224.57280, 184.83701, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 227.62489, 184.83701, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 230.77051, 184.83702, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 231.62601, 184.83701, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 212.54161, 155.15767, 1003.78003,   0.00000, 0.00000, 45.00000);
	CreateDynamicObject(19358, 210.28281, 157.41670, 1003.78003,   0.00000, 0.00000, 45.00000);
	CreateDynamicObject(19358, 208.21500, 159.47510, 1003.78003,   0.00000, 0.00000, 45.00000);
	CreateDynamicObject(19358, 206.97740, 160.70720, 1003.78003,   0.00000, 0.00000, 45.00000);
	CreateDynamicObject(19358, 207.06129, 162.28329, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 207.06129, 164.30730, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 207.06129, 171.79810, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19388, 207.06129, 174.38429, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 205.48250, 173.00105, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 202.27589, 173.00110, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 199.07610, 173.00110, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14401, 194.41940, 187.84250, 1002.34100,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19358, 207.06129, 177.53810, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 207.06129, 180.72520, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 199.16830, 174.39140, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 205.45271, 182.48798, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 202.38091, 182.48801, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 199.29210, 182.48801, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14401, 186.99373, 171.28333, 1002.34100,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(14401, 191.03400, 171.24390, 1002.34100,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2167, 206.93800, 177.33411, 1002.02612,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2167, 206.93800, 178.24300, 1002.02612,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2167, 206.93800, 179.15810, 1002.02612,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2167, 206.93800, 180.06140, 1002.02612,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2167, 206.93800, 180.96210, 1002.02612,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2167, 206.93800, 181.88550, 1002.02612,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19358, 207.06129, 182.86440, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2167, 199.38570, 179.15810, 1002.02612,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2167, 199.38570, 181.88550, 1002.02612,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2167, 199.38570, 180.96210, 1002.02612,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2167, 199.38570, 180.06140, 1002.02612,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2167, 199.38570, 178.24300, 1002.02612,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2167, 199.38570, 177.33411, 1002.02612,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2167, 199.38570, 176.41220, 1002.02612,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 199.16827, 177.46349, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 199.16830, 180.62990, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 199.16830, 183.27029, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2183, 214.33771, 164.19189, 1002.01788,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2183, 216.46719, 163.36560, 1002.01788,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2183, 226.73270, 178.60609, 1002.01788,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2183, 224.60570, 179.45270, 1002.01788,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1715, 223.53513, 182.38112, 1002.01801,   0.00000, 0.00000, 35.00000);
	CreateDynamicObject(1715, 228.19695, 182.08936, 1002.01801,   0.00000, 0.00000, -35.00000);
	CreateDynamicObject(1715, 223.87810, 178.58319, 1002.01801,   0.00000, 0.00000, 105.00000);
	CreateDynamicObject(1715, 228.35802, 178.61037, 1002.01801,   0.00000, 0.00000, -120.00000);
	CreateDynamicObject(2606, 226.18990, 184.82710, 1004.60809,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2606, 224.20689, 184.84331, 1004.16510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2606, 226.18990, 184.84331, 1003.70508,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2606, 228.18880, 184.84331, 1003.70508,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2606, 224.20689, 184.84331, 1003.70508,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2606, 226.18990, 184.84331, 1004.16510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2606, 228.18880, 184.84331, 1004.16510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2606, 231.85960, 180.20770, 1004.16510,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2606, 231.85959, 178.22414, 1004.16510,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2606, 231.85960, 182.19020, 1004.58807,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2606, 231.85960, 178.22411, 1003.72211,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2606, 231.85960, 180.20770, 1003.72211,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2606, 231.85960, 182.19020, 1003.72211,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2606, 231.85960, 182.19020, 1004.16510,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2606, 231.85960, 180.20770, 1004.58807,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2606, 231.85960, 178.22411, 1004.58807,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2606, 224.85941, 174.99690, 1004.16510,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2606, 224.81880, 174.99690, 1003.70508,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2606, 226.82230, 174.99690, 1003.70508,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2606, 226.82260, 174.99690, 1004.16510,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2606, 226.82260, 174.99690, 1004.60809,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2606, 228.78680, 174.99690, 1004.16510,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2606, 228.78680, 174.99690, 1003.70508,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1502, 217.05307, 146.46645, 1002.02118,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1502, 218.57280, 150.82471, 1002.02118,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1502, 204.30240, 146.46651, 1002.02118,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1502, 207.11011, 173.63570, 1002.02118,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1239, 292.03839, 180.97690, 1006.67938,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2186, 227.69897, 167.76643, 1002.03912,   3.14160, 0.00000, 270.00000);
	CreateDynamicObject(1502, 220.38921, 176.55949, 1002.02118,   0.00000, 0.00000, -35.00000);
	CreateDynamicObject(1722, 214.30000, 146.59579, 1002.12341,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1722, 215.30000, 146.56000, 1002.12341,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1722, 213.30000, 146.59579, 1002.12341,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1722, 211.30000, 146.59579, 1002.12341,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1722, 210.30000, 146.59579, 1002.12341,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1722, 212.30000, 146.59579, 1002.12341,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1722, 209.30000, 146.59579, 1002.12341,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1722, 208.30000, 146.59579, 1002.12341,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1703, 247.20020, 153.50043, 1002.02283,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1209, 218.05896, 154.47768, 1002.01959,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1776, 215.70760, 154.60989, 1003.08960,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2193, 211.84027, 168.85776, 1002.02240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2193, 213.28743, 160.61255, 1002.02240,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2193, 219.78543, 161.53096, 1002.02240,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2193, 218.70576, 169.94220, 1002.02240,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19358, 209.41660, 177.04620, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 208.65649, 177.04620, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1671, 218.66029, 169.01469, 1002.53632,   0.00000, 0.00000, 120.00000);
	CreateDynamicObject(1671, 212.92700, 168.80791, 1002.53632,   0.00000, 0.00000, -120.00000);
	CreateDynamicObject(1671, 218.88400, 161.56880, 1002.53632,   0.00000, 0.00000, 45.00000);
	CreateDynamicObject(1671, 213.04790, 161.42400, 1002.53632,   0.00000, 0.00000, -45.00000);
	CreateDynamicObject(1671, 214.14380, 166.67661, 1002.53632,   0.00000, 0.00000, 45.00000);
	CreateDynamicObject(1671, 217.50751, 166.54300, 1002.53632,   0.00000, 0.00000, -45.00000);
	CreateDynamicObject(1671, 214.22990, 163.09081, 1002.53632,   0.00000, 0.00000, 135.00000);
	CreateDynamicObject(1671, 217.50485, 163.29094, 1002.53625,   0.00000, 0.00000, -135.00000);
	CreateDynamicObject(2195, 223.88747, 161.65569, 1002.72009,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(630, 207.54947, 165.82199, 1003.19977,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(630, 207.55051, 170.11223, 1003.19977,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2195, 213.79070, 154.52310, 1002.72009,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2194, 212.03807, 161.49716, 1003.59827,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2194, 211.77501, 170.09145, 1003.59827,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 214.34010, 177.04620, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 211.45399, 177.04620, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19358, 216.93300, 177.04620, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19172, 228.14520, 164.40550, 1004.26599,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19174, 219.47090, 143.47650, 1004.35016,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19325, 214.48834, 150.84183, 1003.43329,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19325, 224.26080, 167.57823, 1003.43329,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19358, 217.21060, 154.07359, 1003.78003,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19466, 233.98833, 201.78181, 1003.63568,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19173, 207.15518, 163.35141, 1004.18701,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1808, 219.99983, 162.17169, 1002.00781,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1808, 207.94029, 160.02957, 1002.00781,   0.00000, 0.00000, 135.00000);
	CreateDynamicObject(1808, 208.33350, 159.65939, 1002.00781,   0.00000, 0.00000, 135.00000);
	CreateDynamicObject(950, 225.54111, 173.51131, 1002.56592,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(950, 230.01616, 173.52101, 1002.56592,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1359, 224.77252, 162.71007, 1002.73492,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2737, 210.93135, 156.94279, 1004.13220,   0.00000, 0.00000, 135.00000);
	CreateDynamicObject(2195, 207.65331, 176.45729, 1002.72009,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2162, 228.08250, 165.87019, 1002.02032,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19172, 217.27223, 153.98262, 1004.26599,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19378, 233.31972, 162.72804, 1001.91791,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19893, 215.03909, 165.47580, 1002.80823,   0.00000, 0.00000, 240.00000);
	CreateDynamicObject(19893, 216.38425, 166.07323, 1002.80823,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19893, 216.40160, 164.24916, 1002.80823,   0.00000, 0.00000, 45.00000);
	CreateDynamicObject(19893, 215.27655, 164.19716, 1002.80823,   0.00000, 0.00000, -45.00000);
	CreateDynamicObject(11706, 216.83362, 154.39322, 1002.00226,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11706, 233.37805, 163.37514, 1002.00232,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(11705, 234.28300, 162.67044, 1003.02155,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11705, 217.50650, 164.43730, 1002.76318,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11711, 288.79459, 166.64760, 1009.04828,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11711, 238.64192, 138.32654, 1005.12030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18608, 213.05309, 148.58133, 1006.21521,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(18608, 214.96161, 167.29950, 1006.21521,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18608, 223.99725, 150.50162, 1006.21521,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2195, 193.65344, 127.77477, 1002.72009,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2195, 211.77396, 140.60994, 1002.72009,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19175, 202.80667, 148.70285, 1004.16736,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1569, 274.85709, 189.29890, 1006.16608,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 274.87711, 189.29890, 1006.16608,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1569, 276.35913, 189.29602, 1006.16608,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 295.84131, 189.30290, 1006.16608,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 295.84131, 189.30290, 1006.16608,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1569, 297.35980, 189.30290, 1006.16608,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1703, 245.05797, 158.63844, 1002.02283,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1703, 249.48895, 156.99985, 1002.02283,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(955, 249.55600, 162.47121, 1002.42432,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1776, 249.50169, 160.41440, 1003.13031,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2195, 249.22980, 152.31792, 1002.72009,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1827, 225.03569, 143.59123, 1002.01917,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1827, 232.10622, 146.10014, 1002.01917,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11706, 242.04045, 157.83235, 1002.02448,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19358, 228.22971, 149.14980, 1003.78003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19388, 228.22900, 151.47971, 1003.78003,   0.00000, 0.00000, 0.00000);

	//mercado negro by handa
	CreateDynamicObject(16370, 2438.39233, -1779.42920, 9.40485,   -6.24000, -17.34000, -179.76016);
	CreateDynamicObject(16370, 2434.97314, -1779.53467, 5.40366,   0.78000, -45.77993, -186.00026);
	CreateDynamicObject(18663, 2440.99146, -1764.79688, 14.20936,   0.00000, 0.00000, 0.96000);
	CreateDynamicObject(1710, 2441.74780, -1767.81775, 12.49304,   0.00000, 0.00000, 90.30000);
	CreateDynamicObject(1362, 2442.31934, -1762.18250, 13.06006,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, 2441.61816, -1759.76147, 13.09153,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 2441.64697, -1758.86548, 12.20777,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 2441.59717, -1759.34033, 12.20777,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 2441.66455, -1759.86755, 12.20777,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 2441.55469, -1760.53088, 12.20777,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1710, 2451.22192, -1759.08594, 12.49304,   0.00000, 0.00000, -0.41999);
	CreateDynamicObject(639, 2427.49487, -1771.71521, 13.99733,   10.74001, 23.10004, 0.00000);
	CreateDynamicObject(639, 2427.15112, -1776.85291, 13.60812,   10.74001, 23.10004, 0.00000);
	CreateDynamicObject(1440, 2461.26733, -1770.63782, 13.01550,   0.00000, 0.00000, -66.12001);
	CreateDynamicObject(1440, 2439.31348, -1770.56494, 13.01550,   0.00000, 0.00000, 36.53999);
	CreateDynamicObject(2680, 2447.36621, -1758.01685, 13.78208,   0.00000, 0.00000, -24.36000);
	CreateDynamicObject(2672, 2456.10791, -1761.38660, 12.83642,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2672, 2444.46021, -1768.93591, 12.85320,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1946, 2449.10352, -1759.41370, 12.67641,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11730, 2457.71924, -1758.70190, 12.39549,   -3.96000, 7.74000, -47.51999);
	CreateDynamicObject(2696, 2455.61377, -1758.38196, 14.65513,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2695, 2456.12036, -1758.36780, 14.66025,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2063, 2460.11963, -1766.39966, 13.32953,   0.00000, 0.00000, -64.37999);
	CreateDynamicObject(4099, 2461.46021, -1771.28674, 14.03256,   0.00000, 0.00000, 173.03995);
	CreateDynamicObject(3594, 2438.00854, -1776.40491, 12.99678,   0.00000, 0.00000, 51.66000);
	CreateDynamicObject(3594, 2441.51001, -1777.11951, 12.71817,   -17.34000, 6.96000, -73.44000);
	CreateDynamicObject(1358, 2468.59229, -1773.19092, 13.73702,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1328, 2449.01929, -1778.93713, 13.07144,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2050, 2449.04395, -1758.31677, 14.78561,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2056, 2449.61108, -1758.29834, 14.58866,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2051, 2448.33203, -1758.31128, 14.78206,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19355, 2441.14087, -1761.30066, 12.57861,   0.00000, 0.00000, 91.74001);
	CreateDynamicObject(19355, 2442.77734, -1758.71606, 12.57861,   0.00000, 0.00000, 0.72004);
	CreateDynamicObject(1499, 2459.34814, -1762.81372, 12.55052,   0.00000, 0.00000, -67.26000);
	CreateDynamicObject(946, 2445.73242, -1779.05017, 14.37179,   0.00000, 0.00000, 0.78000);
	CreateDynamicObject(3264, 2483.40381, -1784.49182, 12.40498,   0.00000, 0.00000, 91.50001);
	CreateDynamicObject(3173, 2455.47192, -1790.09509, 12.56613,   0.00000, 0.00000, 89.76000);
	CreateDynamicObject(3173, 2469.78345, -1790.09509, 12.54987,   0.00000, 0.00000, 89.94000);
	CreateDynamicObject(4100, 2483.11792, -1778.04224, 14.16059,   0.00000, 0.00000, 51.60001);
	CreateDynamicObject(4100, 2475.85620, -1791.94763, 14.16059,   0.00000, 0.00000, -39.78000);
	CreateDynamicObject(4100, 2462.01953, -1791.97900, 14.16059,   0.00000, 0.00000, -39.78000);
	CreateDynamicObject(4100, 2448.25854, -1792.01648, 14.12110,   0.00000, 0.00000, -39.78000);
  
	//interior banco by handa
	CreateDynamicObject(8419, 259.15799, 386.54691, 1005.00836,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, 250.31335, 356.57520, 1018.37708,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, 270.36844, 351.07129, 1018.37708,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, 266.08640, 339.91113, 1018.37708,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, 267.27261, 355.62939, 1018.37708,   0.00000, 0.00000, -20.00000);
	CreateDynamicObject(19450, 253.64090, 343.55069, 1018.37708,   0.00000, 0.00000, 20.00000);
	CreateDynamicObject(19450, 258.20267, 360.06189, 1018.37708,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, 269.69370, 343.99911, 1018.37708,   0.00000, 0.00000, -20.00000);
	CreateDynamicObject(19450, 252.53880, 349.36081, 1018.37708,   0.00000, 0.00000, -20.00000);
	CreateDynamicObject(19450, 268.05850, 361.90289, 1018.37708,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, 259.80939, 339.91202, 1018.37708,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, 263.65106, 362.53513, 1018.37708,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19378, 266.56625, 343.94183, 1016.72058,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19378, 256.36404, 344.29178, 1016.72058,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19378, 254.91734, 353.46454, 1016.72058,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19378, 250.08255, 363.04779, 1016.72058,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19378, 260.61340, 362.95016, 1016.72058,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19378, 271.03519, 363.02039, 1016.72058,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19450, 265.64822, 343.13284, 1018.37708,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19388, 265.64139, 349.52380, 1018.37708,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, 259.35455, 342.37613, 1018.37708,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19388, 259.35489, 348.71109, 1018.37708,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, 256.82541, 357.46509, 1018.37708,   0.00000, 0.00000, 32.00000);
	CreateDynamicObject(19325, 265.18109, 362.18900, 1019.06000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18070, 261.78629, 360.88889, 1017.20679,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19325, 261.85510, 358.89261, 1019.06000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19325, 258.55460, 362.21631, 1019.06000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18070, 261.79178, 360.86966, 1019.62677,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 265.60309, 348.78799, 1016.80798,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1569, 259.38739, 351.07651, 1016.80798,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19388, 259.35440, 351.82260, 1018.37708,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19388, 254.71159, 355.33350, 1018.37708,   0.00000, 0.00000, -20.00000);
	CreateDynamicObject(1569, 259.40109, 347.98709, 1016.80798,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, 269.69412, 352.58533, 1018.37708,   0.00000, 0.00000, 20.00000);
	CreateDynamicObject(19802, 254.46190, 354.61160, 1016.80762,   0.00000, 0.00000, 70.00000);
	CreateDynamicObject(19378, 265.41373, 353.42325, 1016.72058,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19450, 254.62900, 350.33139, 1018.37708,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, 249.82025, 355.07584, 1018.37708,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, 254.02138, 362.54568, 1018.37708,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19273, 259.40369, 352.78711, 1018.24377,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19273, 259.24371, 352.78711, 1018.24377,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19324, 267.14966, 356.69431, 1017.42700,   0.00000, 0.00000, -110.00000);
	CreateDynamicObject(19324, 266.65060, 355.21857, 1017.42700,   0.00000, 0.00000, -110.00000);
	CreateDynamicObject(19324, 258.63092, 356.71112, 1017.42700,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19324, 265.51089, 352.27179, 1017.42700,   0.00000, 0.00000, -110.00000);
	CreateDynamicObject(19324, 266.04785, 353.68359, 1017.42700,   0.00000, 0.00000, -113.00000);
	CreateDynamicObject(19450, 255.26390, 361.63400, 1018.37708,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19324, 258.74860, 355.30780, 1017.42700,   0.00000, 0.00000, 115.00000);
	CreateDynamicObject(19172, 265.57031, 343.08029, 1018.85931,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2614, 265.50879, 346.47559, 1018.81219,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(948, 265.19595, 340.29080, 1016.80731,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(948, 259.67691, 340.24026, 1016.80841,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1557, 261.22919, 339.94040, 1016.80603,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1557, 264.22620, 339.93311, 1016.80603,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(1703, 259.97830, 341.07108, 1016.80731,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1703, 259.95557, 345.62485, 1016.80731,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1738, 259.46609, 343.89038, 1017.44537,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1808, 259.63184, 344.88370, 1016.80762,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(948, 265.14047, 357.89978, 1016.80603,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(948, 258.62021, 358.07297, 1016.80560,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19324, 259.53009, 354.13730, 1017.42700,   0.00000, 0.00000, 127.00000);
	CreateDynamicObject(2332, 250.25119, 350.91949, 1017.28510,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2332, 250.22980, 351.74796, 1017.28510,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2332, 250.23154, 352.56015, 1017.28510,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2332, 250.27274, 353.37924, 1017.28510,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2332, 250.27271, 353.37921, 1018.04510,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2332, 250.21176, 352.55664, 1018.04510,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2332, 250.17065, 351.73773, 1018.04510,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2332, 250.19196, 350.90909, 1018.04510,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19378, 266.58038, 353.25800, 1019.82062,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19378, 266.56631, 343.94180, 1019.82062,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19378, 262.73328, 362.77472, 1019.82062,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19378, 256.10233, 353.37183, 1019.82062,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19378, 256.04797, 343.91577, 1019.82062,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19378, 245.60374, 354.17328, 1019.82062,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19378, 252.53374, 362.88535, 1019.82062,   0.00000, 90.00000, 0.00000);

	//instituto / 175 objetos / edinsonwalker
	CreateObject(14415, 2677.87305, -1308.46191, 1014.82800,   0.00000, 0.00000, 181.38977);
	CreateObject(14415, 2626.68555, -1326.53418, 1014.82434,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1506, 2610.87354, -1331.08362, 1008.66028,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1506, 2612.37183, -1331.08301, 1008.66028,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2643.50342, -1334.01514, 1008.66028,   0.00000, 0.00000, 90.75000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2643.49561, -1315.50964, 1008.66028,   0.00000, 0.00000, 90.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2675.34937, -1297.08472, 1008.66028,   0.00000, 0.00000, 91.52161, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.54102, -1332.54822, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2638.97168, -1321.73218, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2671.83984, -1302.59790, 1009.16315,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2207, 2631.64941, -1338.16809, 1008.66028,   0.00000, 359.23096, 178.25484, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2207, 2628.27002, -1315.69250, 1008.66028,   0.00000, 359.23096, 49.13495, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2207, 2663.28687, -1314.96118, 1008.66394,   0.00000, 359.23096, 4.59848, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1714, 2630.61768, -1339.62622, 1008.66028,   0.00000, 0.00000, 155.81493, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1714, 2627.32251, -1313.93225, 1008.66028,   0.00000, 0.00000, 46.13493, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1714, 2663.94385, -1313.42957, 1008.66394,   0.00000, 0.00000, 23.21347, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1714, 2662.18848, -1303.05701, 1008.62964,   0.00000, 0.00000, 167.84489, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2698.46411, -1314.16309, 1008.66394,   0.00000, 0.00000, 271.46106, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2698.54541, -1317.18542, 1008.66394,   0.00000, 0.00000, 90.82397, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2693.52344, -1303.51843, 1008.66394,   0.00000, 0.00000, 180.88904, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2690.52490, -1303.59253, 1008.66394,   0.00000, 0.00000, 1.52179, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2685.57764, -1298.57007, 1008.66394,   0.00000, 0.00000, 91.58707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2685.46118, -1295.53320, 1008.66394,   0.00000, 0.00000, 271.45105, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2670.14648, -1312.06909, 1008.66394,   0.00000, 0.00000, 181.38525, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2667.15454, -1312.20410, 1008.66412,   0.00000, 0.00000, 2.27740, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2669.94019, -1303.61340, 1008.66394,   0.00000, 0.00000, 181.38428, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2666.92871, -1303.73438, 1008.66028,   0.00000, 0.00000, 2.27417, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2672.32593, -1297.18286, 1008.66028,   0.00000, 0.00000, 91.52161, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2668.83594, -1297.24548, 1008.66028,   0.00000, 0.00000, 91.52161, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2673.89136, -1302.48584, 1008.66028,   0.00000, 0.00000, 91.52161, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2670.91431, -1302.52209, 1008.66028,   0.00000, 0.00000, 91.52161, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2671.81714, -1301.82361, 1009.16315,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2671.82495, -1301.02075, 1009.16315,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2674.92578, -1301.76794, 1009.16315,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2670.24048, -1297.44421, 1009.16315,   0.00000, 0.00000, 0.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2670.24121, -1296.57495, 1009.16315,   0.00000, 0.00000, 0.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2670.24365, -1295.77173, 1009.16315,   0.00000, 0.00000, 0.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2673.61377, -1295.61499, 1009.16315,   0.00000, 0.00000, 0.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2673.69727, -1297.27258, 1009.16315,   0.00000, 0.00000, 0.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2673.65430, -1296.45544, 1009.16315,   0.00000, 0.00000, 0.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2676.22583, -1297.02161, 1009.16315,   0.00000, 0.00000, 0.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2676.20239, -1296.28833, 1009.16315,   0.00000, 0.00000, 0.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2676.18652, -1295.52124, 1009.16315,   0.00000, 0.00000, 0.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2641.18213, -1334.04895, 1008.66028,   0.00000, 0.00000, 90.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2638.93286, -1334.08105, 1008.66028,   0.00000, 0.00000, 90.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2639.02075, -1339.17700, 1008.66028,   0.00000, 0.00000, 90.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2641.17920, -1339.14355, 1008.66028,   0.00000, 0.00000, 90.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2643.58447, -1339.10889, 1008.66028,   0.00000, 0.00000, 90.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.62500, -1333.31860, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.57642, -1334.12134, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2642.07471, -1332.57178, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2642.06860, -1333.29810, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2642.10791, -1334.06982, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2639.85889, -1334.12427, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2639.84570, -1333.35999, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2639.82104, -1332.54858, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2639.93921, -1339.29285, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2639.95093, -1338.46436, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2639.92725, -1337.71655, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2642.02539, -1337.69873, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2642.10791, -1338.46484, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2642.03467, -1339.27173, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.43262, -1339.25195, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.42407, -1338.42554, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.42139, -1337.67651, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2640.77393, -1315.47998, 1008.66028,   0.00000, 0.00000, 90.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2637.93237, -1315.29956, 1008.66028,   0.00000, 0.00000, 90.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2638.06787, -1321.59619, 1008.66028,   0.00000, 0.00000, 90.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2640.98608, -1321.68591, 1008.66028,   0.00000, 0.00000, 90.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2643.54175, -1321.64343, 1008.66028,   0.00000, 0.00000, 90.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2638.98413, -1320.99207, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2638.95117, -1320.15601, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2641.87402, -1320.24451, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2641.80444, -1321.08972, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2641.86279, -1321.81763, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.41064, -1321.79150, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.41528, -1321.00061, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.39331, -1320.21558, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.44775, -1315.62866, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.42603, -1314.82532, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.41553, -1314.05249, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2638.81494, -1315.39136, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2641.66821, -1315.58533, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2641.68140, -1314.71948, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2641.70166, -1313.97534, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2638.75610, -1314.63611, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2638.76782, -1313.81519, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2652.29785, -1316.32654, 1008.66394,   0.00000, 0.00000, 270.02414, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2652.37915, -1319.32813, 1008.66394,   0.00000, 0.00000, 92.27206, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2618.66455, -1339.29126, 1008.66394,   0.00000, 0.00000, 90.76868, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2618.62500, -1336.29297, 1008.66394,   0.00000, 0.00000, 270.01343, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2634.49976, -1323.03406, 1008.66394,   0.00000, 0.00000, 358.51096, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2637.49756, -1323.08374, 1008.66394,   0.00000, 0.00000, 179.25806, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2634.49829, -1331.57935, 1008.66394,   0.00000, 0.00000, 0.00586, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2637.53540, -1331.55444, 1008.66394,   0.00000, 0.00000, 180.00293, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1536, 2707.32666, -1313.97900, 1008.66394,   0.00000, 0.00000, 272.25000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1536, 2707.42798, -1316.96753, 1008.66394,   0.00000, 0.00000, 89.99969, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14657, 2692.33057, -1325.70654, 1009.25031,   0.00000, 0.00000, -88.92000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1984, 2694.62231, -1307.37390, 1008.62347,   0.00000, 0.00000, 90.18000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2452, 2696.66675, -1304.21765, 1008.63135,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2665, 2698.09399, -1306.37769, 1010.66663,   0.00000, 0.00000, -88.62004, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2453, 2694.56445, -1307.41541, 1009.93585,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2419, 2697.43018, -1307.22339, 1008.62640,   0.00000, 0.00000, -86.16000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2367, 2697.53809, -1309.99658, 1008.61041,   0.00000, 0.00000, 0.96000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2367, 2695.45068, -1310.04346, 1008.61041,   0.00000, 0.00000, 0.96000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2367, 2694.66675, -1308.42456, 1008.61035,   0.00000, 0.00000, -90.12000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2421, 2698.22192, -1309.39709, 1009.96381,   0.00000, 0.00000, -88.38002, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1775, 2698.03198, -1318.06042, 1009.73315,   0.00000, 0.00000, 270.41977, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19175, 2688.38062, -1303.97656, 1010.78705,   0.00000, 0.00000, 1.38000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1713, 2689.22095, -1309.63232, 1008.60474,   0.00000, 0.00000, 181.13995, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1713, 2687.47241, -1304.72095, 1008.60468,   0.00000, 0.00000, 1.44000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1827, 2688.63672, -1307.11304, 1008.64691,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2964, 2688.37280, -1314.29724, 1008.64441,   0.00000, 0.00000, -84.23997, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2010, 2686.67798, -1310.38171, 1008.64423,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1713, 2686.68896, -1308.10376, 1008.60468,   0.00000, 0.00000, 90.90004, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1713, 2687.62720, -1311.08936, 1008.60468,   0.00000, 0.00000, 1.20000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2718, 2698.16187, -1312.28674, 1010.18738,   0.00000, 0.00000, -88.55997, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2429, 2698.46094, -1311.17847, 1009.62280,   0.00000, 0.00000, -90.48001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1808, 2686.60400, -1318.50330, 1008.63702,   0.00000, 0.00000, 90.71999, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14782, 2697.98828, -1302.85034, 1009.60876,   0.00000, 0.00000, 180.41997, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14657, 2697.09058, -1289.76221, 1009.25031,   0.00000, 0.00000, -88.92000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14782, 2701.64404, -1301.77734, 1009.60876,   0.00000, 0.00000, 271.25995, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14455, 2680.15283, -1315.47424, 1010.29498,   0.00000, 0.00000, 1.44000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3077, 2660.21460, -1298.52930, 1008.60901,   0.00000, 0.00000, -89.87999, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2491, 2662.91577, -1298.35840, 1008.03729,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2674.95776, -1302.54639, 1009.16315,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2674.90552, -1300.94727, 1009.16315,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2207, 2663.22632, -1301.59875, 1008.66394,   0.00000, 359.23096, 179.73849, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2164, 2665.28247, -1322.48254, 1008.64783,   0.00000, 0.00000, 180.90001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3077, 2661.48999, -1317.78381, 1008.60901,   0.00000, 0.00000, -89.87999, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2491, 2664.06934, -1318.07324, 1008.03729,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2671.23926, -1313.26709, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2671.35327, -1316.54712, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2671.41748, -1319.97705, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2673.76318, -1316.48950, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2673.68311, -1313.18640, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2676.28442, -1313.12158, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2676.35156, -1316.35156, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2673.88354, -1319.95447, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2676.50732, -1319.89343, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2669.13208, -1320.08813, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2668.95044, -1316.49390, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2670.07813, -1317.33191, 1008.67566,   0.00000, 0.00000, 89.10001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2670.19165, -1320.98779, 1008.67566,   0.00000, 0.00000, 89.10001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2672.61401, -1320.79993, 1008.67566,   0.00000, 0.00000, 89.10001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2675.13623, -1320.85840, 1008.67566,   0.00000, 0.00000, 89.10001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2677.66895, -1320.71484, 1008.67566,   0.00000, 0.00000, 89.10001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2672.40869, -1317.32910, 1008.67566,   0.00000, 0.00000, 89.10001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2675.00708, -1317.27124, 1008.67566,   0.00000, 0.00000, 89.10001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2677.54907, -1317.19482, 1008.67566,   0.00000, 0.00000, 89.10001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2677.52368, -1314.01245, 1008.67566,   0.00000, 0.00000, 92.04001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2675.06006, -1314.02649, 1008.67566,   0.00000, 0.00000, 92.04001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2672.55933, -1314.08252, 1008.67566,   0.00000, 0.00000, 92.04001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14532, 2662.63477, -1320.74756, 1009.63788,   0.00000, 0.00000, -56.81999, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14782, 2602.80444, -1332.03064, 1009.67230,   0.00000, 0.00000, 90.17999, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3496, 2602.92578, -1339.76331, 1008.51721,   0.00000, 0.00000, -47.04000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2627, 2607.66187, -1339.07776, 1008.64673,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2627, 2606.21338, -1339.08765, 1008.64673,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2627, 2609.12280, -1339.09290, 1008.64673,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2631, 2606.46021, -1333.16895, 1008.68732,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2632, 2609.81543, -1335.79529, 1008.68732,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2630, 2614.75098, -1332.86877, 1008.66138,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2630, 2616.50439, -1332.84180, 1008.66138,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2915, 2607.94092, -1332.88220, 1008.84375,   0.00000, 0.00000, -28.08000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1808, 2618.24707, -1335.79810, 1008.60956,   0.00000, 0.00000, -90.77998, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2915, 2607.18579, -1333.03418, 1008.84375,   0.00000, 0.00000, -54.23999, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2844, 2610.45850, -1339.95459, 1008.65393,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14782, 2614.84570, -1339.88025, 1009.67230,   0.00000, 0.00000, 179.94002, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3077, 2630.59082, -1318.84875, 1008.61169,   0.00000, 0.00000, -84.96001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2491, 2633.70020, -1318.34973, 1008.03729,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1714, 2630.61768, -1339.62622, 1008.66028,   0.00000, 0.00000, 155.81493, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3077, 2629.98560, -1334.88354, 1008.61169,   0.00000, 0.00000, -94.20001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2491, 2632.52368, -1334.89697, 1008.03729,   0.00000, 0.00000, -9.72000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14455, 2632.58496, -1331.92871, 1010.14722,   0.00000, 0.00000, 179.87993, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2186, 2660.19995, -1314.01575, 1008.63147,   0.00000, 0.00000, 34.02002, -1, 31, -1, MAX_RADIO_STREAM);
	//interior idlewood int1 - 39 objs
	CreateDynamicObject(14596, 1820.47034, -1055.44849, 22.05060,   0.00000, 0.00000, 180.00000, 56, 56);
	CreateDynamicObject(19456, 1815.97559, -1055.87646, 23.18440,   90.00000, 0.00000, 90.00000, 56, 56);
	CreateDynamicObject(1498, 1815.04187, -1055.93420, 22.93605,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(19858, 1825.25769, -1059.94202, 24.17264,   0.00000, 0.00000, 90.00000, 56, 56);
	CreateDynamicObject(19456, 1825.33105, -1059.25354, 23.18440,   90.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(19456, 1825.33105, -1059.25354, 23.18440,   90.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(19456, 1826.13696, -1058.91235, 30.95345,   90.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(19858, 1826.04529, -1059.89185, 29.94178,   0.00000, 0.00000, 90.00000, 56, 56);
	CreateDynamicObject(19858, 1821.75452, -1062.28723, 29.94180,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(19858, 1818.11218, -1062.28723, 29.94180,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(19858, 1814.84241, -1060.64465, 29.94180,   0.00000, 0.00000, -90.00000, 56, 56);
	CreateDynamicObject(19858, 1820.49890, -1058.12842, 24.18528,   0.00000, 0.00000, 180.00000, 56, 56);
	CreateDynamicObject(19858, 1823.46204, -1056.62952, 29.94180,   0.00000, 0.00000, 180.00000, 56, 56);
	CreateDynamicObject(19858, 1814.83716, -1048.86938, 27.97093,   0.00000, 0.00000, -90.00000, 56, 56);
	CreateDynamicObject(1764, 1822.11438, -1048.98474, 24.69716,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(2231, 1824.79041, -1048.79749, 24.74630,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(18663, 1824.91052, -1050.54956, 26.03088,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(2671, 1817.44507, -1059.94092, 22.96277,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(2671, 1815.06384, -1057.70032, 22.98669,   0.00000, 0.00000, 33.24000, 56, 56);
	CreateDynamicObject(2671, 1822.83704, -1059.56152, 22.97620,   0.00000, 0.00000, -58.92001, 56, 56);
	CreateDynamicObject(2690, 1822.10767, -1057.49536, 23.08419,   -87.83999, 53.82004, -106.92003, 56, 56);
	CreateDynamicObject(2121, 1814.95374, -1061.55444, 23.46568,   0.00000, 0.00000, 142.67992, 56, 56);
	CreateDynamicObject(2121, 1816.05249, -1061.69958, 23.44081,   0.00000, 0.00000, 193.73993, 56, 56);
	CreateDynamicObject(2692, 1824.38977, -1061.43127, 23.68450,   0.00000, 0.00000, -123.06001, 56, 56);
	CreateDynamicObject(2670, 1823.49573, -1050.50610, 24.84618,   0.00000, 0.00000, 42.06001, 56, 56);
	CreateDynamicObject(4729, 1830.55579, -1056.64270, 30.76050,   0.00000, 0.00000, 289.97992, 56, 56);
	CreateDynamicObject(1711, 1824.79797, -1061.15649, 28.73417,   0.00000, 0.00000, -90.05997, 56, 56);
	CreateDynamicObject(1738, 1815.05090, -1050.97815, 27.37410,   0.00000, 0.00000, -90.00000, 56, 56);
	CreateDynamicObject(1509, 1817.68835, -1058.01978, 28.94992,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(1509, 1817.72266, -1057.57898, 28.94992,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(1509, 1817.60376, -1057.68030, 28.94992,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(1509, 1817.56653, -1057.90088, 28.78456,   82.14001, -40.32000, 0.00000, 56, 56);
	CreateDynamicObject(0, 1816.41138, -1049.75659, 26.85710,   0.00000, 0.00000, 359.93930, 56, 56);
	CreateDynamicObject(2671, 1823.52246, -1058.60254, 28.77441,   0.00000, 0.00000, -128.63997, 56, 56);
	CreateDynamicObject(2671, 1817.92310, -1060.07910, 28.77441,   0.00000, 0.00000, -232.13995, 56, 56);
	CreateDynamicObject(18664, 1819.29993, -1058.16162, 30.53199,   0.00000, 0.00000, 90.00000, 56, 56);
	CreateDynamicObject(18665, 1820.38049, -1058.16467, 30.17990,   0.00000, 0.00000, 90.00000, 56, 56);
	CreateDynamicObject(18659, 1819.80505, -1058.16858, 31.25770,   0.00000, 0.00000, 90.00000, 56, 56);
	CreateDynamicObject(1232, 1813.44421, -1054.55884, 32.99968,   -68.69991, 134.45996, 0.00000, 56, 56);

	//interior idlewood int2 - 43objs
	CreateDynamicObject(14596, 1820.47034, -1055.44849, 22.05060,   0.00000, 0.00000, 180.00000, 43, 43);
	CreateDynamicObject(19456, 1815.97559, -1055.87646, 23.18440,   90.00000, 0.00000, 90.00000, 43, 43);
	CreateDynamicObject(19858, 1825.25769, -1059.94202, 24.15552,   0.00000, 0.00000, 90.00000, 43, 43);
	CreateDynamicObject(19456, 1825.33105, -1059.25354, 23.18440,   90.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(19456, 1825.33105, -1059.25354, 23.18440,   90.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(19456, 1826.13696, -1058.91235, 30.95345,   90.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(19858, 1826.04529, -1059.89185, 29.94178,   0.00000, 0.00000, 90.00000, 43, 43);
	CreateDynamicObject(19858, 1821.75452, -1062.28723, 29.94180,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(19858, 1818.11218, -1062.28723, 29.94180,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(19858, 1814.84241, -1060.64465, 29.94180,   0.00000, 0.00000, -90.00000, 43, 43);
	CreateDynamicObject(19858, 1823.46204, -1056.62952, 29.94180,   0.00000, 0.00000, 180.00000, 43, 43);
	CreateDynamicObject(19858, 1814.83716, -1048.86938, 27.97093,   0.00000, 0.00000, -90.00000, 43, 43);
	CreateDynamicObject(1764, 1822.11438, -1048.98474, 24.69716,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(2231, 1824.79041, -1048.79749, 24.74630,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(18665, 1824.91052, -1050.54956, 26.03090,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(2671, 1817.44507, -1059.94092, 22.97450,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(2671, 1815.22510, -1057.76160, 22.97450,   0.00000, 0.00000, 29.46000, 43, 43);
	CreateDynamicObject(2671, 1821.43677, -1060.26355, 22.97450,   0.00000, 0.00000, 56.10000, 43, 43);
	CreateDynamicObject(2690, 1824.60974, -1056.00696, 23.08286,   -87.83999, 53.82004, -146.28003, 43, 43);
	CreateDynamicObject(2121, 1815.04578, -1056.80457, 23.44760,   0.00000, 0.00000, 24.66000, 43, 43);
	CreateDynamicObject(2121, 1816.84924, -1057.42322, 23.44756,   0.00000, 0.00000, 317.99985, 43, 43);
	CreateDynamicObject(2693, 1824.38977, -1061.43127, 23.62430,   0.00000, 0.00000, -125.63999, 43, 43);
	CreateDynamicObject(2670, 1823.49573, -1050.50610, 24.84618,   0.00000, 0.00000, 42.06001, 43, 43);
	CreateDynamicObject(4729, 1826.04126, -1059.55322, 30.76050,   0.00000, 0.00000, 199.97984, 43, 43);
	CreateDynamicObject(1727, 1824.53845, -1060.77576, 28.73421,   0.00000, 0.00000, -103.56001, 43, 43);
	CreateDynamicObject(1738, 1815.05090, -1050.97815, 27.37410,   0.00000, 0.00000, -90.00000, 43, 43);
	CreateDynamicObject(1509, 1817.68835, -1058.01978, 28.94992,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(1509, 1817.72266, -1057.57898, 28.94992,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(1509, 1817.60376, -1057.68030, 28.94992,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(1509, 1817.56653, -1057.90088, 28.78456,   82.14001, -40.32000, 0.00000, 43, 43);
	CreateDynamicObject(0, 1816.41138, -1049.75659, 26.85710,   0.00000, 0.00000, 359.93930, 43, 43);
	CreateDynamicObject(2671, 1823.52246, -1058.60254, 28.77441,   0.00000, 0.00000, -128.63997, 43, 43);
	CreateDynamicObject(2671, 1817.92310, -1060.07910, 28.77441,   0.00000, 0.00000, -232.13995, 43, 43);
	CreateDynamicObject(18663, 1819.29993, -1058.16162, 30.53200,   0.00000, 0.00000, 90.00000, 43, 43);
	CreateDynamicObject(18665, 1820.38049, -1058.16467, 30.17990,   0.00000, 0.00000, 90.00000, 43, 43);
	CreateDynamicObject(18660, 1819.80505, -1058.16858, 31.25770,   0.00000, 0.00000, 90.00000, 43, 43);
	CreateDynamicObject(1232, 1813.44421, -1054.55884, 32.99968,   -68.69991, 134.45996, 0.00000, 43, 43);
	CreateDynamicObject(19456, 1816.34167, -1062.35181, 23.18440,   90.00000, 0.00000, 90.00000, 43, 43);
	CreateDynamicObject(1536, 1814.84094, -1062.31775, 22.92750,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(1536, 1817.85498, -1062.28992, 22.92751,   0.00000, 0.00000, -180.47998, 43, 43);
	CreateDynamicObject(1289, 1819.12720, -1058.37122, 23.44770,   0.00000, 0.00000, 180.00000, 43, 43);
	CreateDynamicObject(1287, 1819.59802, -1058.36365, 23.44769,   0.00000, 0.00000, 180.00000, 43, 43);
	CreateDynamicObject(1286, 1820.06970, -1058.35669, 23.44770,   0.00000, 0.00000, 180.00000, 43, 43);
	//interior motel idlewood 60objs
	CreateDynamicObject(18038, -2114.66357, -233.90077, 36.55182,   0.00000, 0.00000, -90.00000, 78, 78);
	CreateDynamicObject(1536, -2129.83521, -231.59261, 34.29290,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(1536, -2129.88599, -228.60802, 34.29285,   0.00000, 0.00000, -90.00000, 78, 78);
	CreateDynamicObject(18665, -2128.38184, -232.69693, 35.63936,   0.00000, 0.00000, -90.11999, 78, 78);
	CreateDynamicObject(19875, -2117.13867, -221.43260, 34.29940,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(19875, -2114.68774, -221.43260, 34.29940,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(19875, -2112.02783, -221.43260, 34.29940,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(1287, -2119.05469, -221.43694, 34.83226,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(1432, -2128.05493, -220.74716, 34.40093,   0.00000, 0.00000, 32.93999, 78, 78);
	CreateDynamicObject(1432, -2127.23022, -217.34068, 34.37304,   0.00000, 0.00000, 94.32002, 78, 78);
	CreateDynamicObject(19364, -2129.95825, -215.07866, 35.60093,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(955, -2129.47949, -214.61510, 34.70210,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(2662, -2129.84058, -215.73227, 36.36358,   0.00000, 0.00000, 90.00003, 78, 78);
	CreateDynamicObject(11706, -2129.59009, -216.07639, 34.31742,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(19456, -2108.72388, -221.52025, 35.60090,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(19875, -2101.44946, -221.43260, 34.29940,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(19875, -2099.36011, -218.40271, 34.29940,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(4227, -2099.31543, -235.21388, 34.95421,   0.00000, 0.00000, 269.92035, 78, 78);
	CreateDynamicObject(1289, -2099.38208, -217.97321, 34.83230,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(2103, -2129.59912, -223.40999, 35.32550,   0.00000, 0.00000, 87.24001, 78, 78);
	CreateDynamicObject(1738, -2100.75195, -221.22658, 34.88366,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(1761, -2108.54761, -213.70160, 34.28360,   0.00000, 0.00000, 359.87982, 78, 78);
	CreateDynamicObject(1762, -2111.89526, -213.99394, 34.28358,   0.00000, 0.00000, 14.99986, 78, 78);
	CreateDynamicObject(2231, -2109.25830, -213.25789, 34.31827,   0.00000, 0.00000, 5.94000, 78, 78);
	CreateDynamicObject(2231, -2110.11841, -213.33311, 34.31827,   0.00000, 0.00000, 19.08000, 78, 78);
	CreateDynamicObject(1788, -2109.86328, -213.69200, 35.29000,   0.00000, 0.00000, 12.12000, 78, 78);
	CreateDynamicObject(14840, -2099.39282, -216.89699, 35.61135,   0.00000, 0.00000, 179.87991, 78, 78);
	CreateDynamicObject(19875, -2099.36011, -213.61050, 34.29940,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(2677, -2128.75049, -224.29030, 34.67017,   0.00000, 0.00000, -22.86000, 78, 78);
	CreateDynamicObject(2677, -2126.70728, -214.66646, 34.61025,   0.00000, 0.00000, -103.14000, 78, 78);
	CreateDynamicObject(1815, -2107.84302, -221.04935, 34.29751,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(1750, -2107.47998, -220.82988, 34.77369,   0.00000, 0.00000, -169.20000, 78, 78);
	CreateDynamicObject(19814, -2107.98682, -221.41179, 34.94300,   0.00000, 0.00000, 180.00000, 78, 78);
	CreateDynamicObject(1764, -2104.31348, -220.62875, 34.29314,   0.00000, 0.00000, 182.39998, 78, 78);
	CreateDynamicObject(2121, -2120.60303, -213.39059, 34.80999,   0.00000, 0.00000, 23.46000, 78, 78);
	CreateDynamicObject(2121, -2119.18286, -213.76292, 34.80999,   0.00000, 0.00000, -30.60000, 78, 78);
	CreateDynamicObject(2121, -2119.49731, -215.47533, 34.80999,   0.00000, 0.00000, -146.51997, 78, 78);
	CreateDynamicObject(2121, -2121.31030, -215.02448, 34.80999,   0.00000, 0.00000, -221.57993, 78, 78);
	CreateDynamicObject(2670, -2119.43433, -214.65594, 34.41192,   0.00000, 0.00000, 8.87999, 78, 78);
	CreateDynamicObject(2671, -2114.02222, -214.43098, 34.33338,   0.00000, 0.00000, 5.04000, 78, 78);
	CreateDynamicObject(19875, -2119.35254, -222.23920, 34.29940,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(19875, -2119.35254, -225.16640, 34.29940,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(19875, -2119.35254, -228.08620, 34.29940,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(2323, -2118.29517, -230.66048, 34.32090,   90.00000, 0.00000, -91.08000, 78, 78);
	CreateDynamicObject(19572, -2129.60742, -225.88168, 35.32058,   0.00000, 0.00000, 67.50000, 78, 78);
	CreateDynamicObject(19572, -2129.61377, -225.00441, 35.32058,   0.00000, 0.00000, 97.68001, 78, 78);
	CreateDynamicObject(2779, -2103.74316, -213.53677, 34.30265,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(2778, -2104.71582, -213.51007, 34.30260,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(1512, -2105.22827, -213.57594, 34.51629,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(1509, -2105.35620, -213.22501, 34.51630,   0.00000, 0.00000, -17.82000, 78, 78);
	CreateDynamicObject(1509, -2103.18896, -213.91528, 34.51630,   0.00000, 0.00000, -17.82000, 78, 78);
	CreateDynamicObject(1709, -2120.43164, -230.65471, 34.28951,   0.00000, 0.00000, 187.07999, 78, 78);
	CreateDynamicObject(2677, -2123.10620, -223.86284, 34.67017,   0.00000, 0.00000, -14.04000, 78, 78);
	CreateDynamicObject(2677, -2121.02173, -229.89307, 34.67017,   0.00000, 0.00000, -14.04000, 78, 78);
	CreateDynamicObject(19875, -2109.40649, -221.43260, 34.29940,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(2323, -2109.46313, -222.41994, 35.59887,   90.00000, 0.00000, -179.51988, 78, 78);
	CreateDynamicObject(2323, -2112.21509, -222.42615, 35.34760,   0.00000, -90.68000, -90.00000, 78, 78);
	CreateDynamicObject(2323, -2110.18896, -222.41183, 35.34760,   0.00000, -90.68000, -90.00000, 78, 78);
	CreateDynamicObject(2673, -2113.89282, -220.65535, 34.41548,   0.00000, 0.00000, 178.56001, 78, 78);
	CreateDynamicObject(19875, -2102.56006, -212.98383, 34.29940,   0.00000, 0.00000, 180.00000, 78, 78);
	//motel willowfield 48 objs
	new m_wiw[3];
	m_wiw[0] = CreateDynamicObject(18981, 376.48361, -1617.72754, 48.80883,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(m_wiw[0], 0, 4600, 	"theatrelan2", 	"gm_labuld2_b", 0xFFFFFFFF);
	m_wiw[1] = CreateDynamicObject(18981, 368.50638, -1630.30518, 48.80883,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(m_wiw[1], 0, 4600, 	"theatrelan2", 	"gm_labuld2_b", 0xFFFFFFFF);
	m_wiw[2] = CreateDynamicObject(18981, 356.49033, -1618.27319, 48.80880,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(m_wiw[2], 0, 4600, 	"theatrelan2", 	"gm_labuld2_b", 0xFFFFFFFF);
	CreateDynamicObject(18033, 375.74719, -1618.67444, 51.20880,   0.00000, 0.00000, -180.00000, 94, 94);
	CreateDynamicObject(1536, 364.11365, -1613.43311, 49.18044,   0.00000, 0.00000, 88.56003, 94, 94);
	CreateDynamicObject(1536, 364.11359, -1610.42261, 49.18040,   0.00000, 0.00000, -90.00000, 94, 94);
	CreateDynamicObject(19875, 376.01160, -1611.37463, 49.20300,   0.00000, 0.00000, 90.00000, 94, 94);
	CreateDynamicObject(19875, 376.01160, -1616.17725, 49.20300,   0.00000, 0.00000, 90.00000, 94, 94);
	CreateDynamicObject(19875, 376.01160, -1619.40381, 49.20300,   0.00000, 0.00000, 90.00000, 94, 94);
	CreateDynamicObject(19875, 376.01160, -1622.34583, 49.20300,   0.00000, 0.00000, 90.00000, 94, 94);
	CreateDynamicObject(19875, 368.99451, -1620.16675, 49.20300,   0.00000, 0.00000, -90.00000, 94, 94);
	CreateDynamicObject(19875, 368.99451, -1622.75476, 49.20300,   0.00000, 0.00000, -90.00000, 94, 94);
	CreateDynamicObject(19875, 368.99451, -1625.37451, 49.20300,   0.00000, 0.00000, -90.00000, 94, 94);
	CreateDynamicObject(19875, 366.43390, -1617.79492, 49.20300,   0.00000, 0.00000, 0.00000, 94, 94);
	CreateDynamicObject(1738, 367.44281, -1617.53992, 49.83509,   0.00000, 0.00000, 0.00000, 94, 94);
	CreateDynamicObject(2121, 368.56790, -1617.43921, 49.64490,   0.00000, 0.00000, 141.78000, 94, 94);
	CreateDynamicObject(2059, 367.62903, -1617.27881, 49.22665,   0.00000, 0.00000, 22.50000, 94, 94);
	CreateDynamicObject(19834, 375.97604, -1611.97656, 50.25000,   0.00000, 60.00000, 90.00000, 94, 94);
	CreateDynamicObject(19834, 375.97424, -1612.01636, 50.25000,   0.00000, -60.00000, 90.00000, 94, 94);
	CreateDynamicObject(19814, 376.01071, -1610.80835, 49.60770,   0.00000, 0.00000, -90.00000, 94, 94);
	CreateDynamicObject(2677, 375.09100, -1611.85522, 49.49541,   0.00000, 0.00000, -131.94002, 94, 94);
	CreateDynamicObject(18663, 364.57339, -1615.72583, 50.72720,   0.00000, 0.00000, 180.00000, 94, 94);
	CreateDynamicObject(18662, 364.56061, -1614.48547, 51.42510,   0.00000, 0.00000, 180.00000, 94, 94);
	CreateDynamicObject(18661, 364.57230, -1616.64880, 51.42510,   -10.36000, -0.36000, 180.17999, 94, 94);
	CreateDynamicObject(1709, 367.37726, -1611.96143, 49.15556,   0.00000, 0.00000, 0.30000, 94, 94);
	CreateDynamicObject(19572, 372.70993, -1611.84814, 49.62217,   0.00000, 0.00000, 0.00000, 94, 94);
	CreateDynamicObject(18662, 370.65579, -1626.92798, 50.72720,   0.00000, 0.00000, 270.06009, 94, 94);
	CreateDynamicObject(18660, 373.76389, -1626.92236, 51.74461,   0.00000, 0.00000, 270.06009, 94, 94);
	CreateDynamicObject(18661, 372.25806, -1626.89258, 51.15924,   12.00000, 0.00000, 270.06009, 94, 94);
	CreateDynamicObject(18662, 373.37930, -1626.92639, 50.69060,   0.00000, 0.00000, 270.06009, 94, 94);
	CreateDynamicObject(18663, 373.14099, -1626.91614, 50.66200,   0.00000, 0.00000, 270.06009, 94, 94);
	CreateDynamicObject(1766, 372.39322, -1626.36560, 49.16965,   0.00000, 0.00000, 174.95992, 94, 94);
	CreateDynamicObject(1767, 375.25601, -1625.20020, 49.16970,   0.00000, 0.00000, 223.13994, 94, 94);
	CreateDynamicObject(2232, 373.64108, -1626.29675, 49.79057,   0.00000, 0.00000, -167.39999, 94, 94);
	CreateDynamicObject(2671, 369.71652, -1614.53210, 49.28593,   0.00000, 0.00000, -194.10001, 94, 94);
	CreateDynamicObject(2671, 373.69339, -1616.43518, 49.28593,   0.00000, 0.00000, -226.31995, 94, 94);
	CreateDynamicObject(2671, 372.28436, -1622.06128, 49.28593,   0.00000, 0.00000, -216.83995, 94, 94);
	CreateDynamicObject(2671, 371.08234, -1618.04431, 49.28593,   0.00000, 0.00000, -252.35991, 94, 94);
	CreateDynamicObject(2690, 369.30322, -1618.13782, 49.24714,   99.95998, 54.18003, -256.92017, 94, 94);
	CreateDynamicObject(2693, 375.95831, -1618.59326, 49.88212,   0.00000, 0.00000, -95.34000, 94, 94);
	CreateDynamicObject(2700, 368.53406, -1617.58752, 51.48763,   0.00000, 0.00000, 77.64001, 94, 94);
	CreateDynamicObject(1512, 375.68378, -1624.81860, 49.40240,   0.00000, 0.00000, 0.00000, 94, 94);
	CreateDynamicObject(1512, 375.55505, -1624.94592, 49.40240,   0.00000, 0.00000, -21.00000, 94, 94);
	CreateDynamicObject(1520, 375.35669, -1624.70361, 49.25675,   0.00000, 0.00000, -16.56000, 94, 94);
	CreateDynamicObject(2323, 368.01303, -1621.28137, 48.31577,   90.00000, 0.00000, 89.99999, 94, 94);
	CreateDynamicObject(2244, 375.77216, -1621.39539, 49.47263,   0.00000, 0.00000, 0.00000, 94, 94);
	CreateDynamicObject(2244, 375.75302, -1621.81726, 49.47263,   0.00000, 0.00000, 0.00000, 94, 94);
	CreateDynamicObject(2323, 368.01965, -1623.93445, 49.56556,   90.00000, 0.00000, 89.99999, 94, 94);
	//carpintero 60 objs
	create_object_ext(3366, 2130.14014, -2401.29663, 13.13580,   0.00000, 0.00000, -90.00000);
	create_object_ext(1684, 2083.75732, -2357.78052, 14.02030,   0.00000, 0.00000, 180.00000);
	create_object_ext(5706, 2097.61938, -2403.90771, 18.04414,   0.00000, 0.00000, -90.00000);
	create_object_ext(1412, 2087.73022, -2381.73682, 13.75254,   0.00000, 0.00000, 90.83999);
	create_object_ext(1412, 2088.38086, -2386.91528, 13.75254,   0.00000, 0.00000, 103.43999);
	create_object_ext(1290, 2089.96094, -2359.71558, 18.51119,   0.00000, 0.00000, -95.58000);
	create_object_ext(1415, 2088.34985, -2380.11304, 12.64069,   0.00000, 0.00000, 91.98001);
	create_object_ext(1415, 2088.43774, -2382.43408, 12.64069,   0.00000, 0.00000, 91.98001);
	create_object_ext(1415, 2088.76196, -2385.76123, 12.64069,   0.00000, 0.00000, 105.00001);
	create_object_ext(1408, 2091.47607, -2387.63354, 12.86418,   -28.00000, 0.00000, 180.59998);
	create_object_ext(1408, 2091.64819, -2387.48486, 12.89868,   -28.00000, 0.00000, 180.29999);
	create_object_ext(1408, 2091.53638, -2387.35132, 12.98671,   -28.00000, 0.00000, 180.59998);
	create_object_ext(2083, 2094.23145, -2386.72412, 12.54663,   0.00000, 0.00000, -85.97998);
	create_object_ext(2083, 2095.37939, -2386.88550, 13.04066,   0.00000, 0.00000, -203.03995);
	create_object_ext(1417, 2094.83472, -2385.63013, 12.80392,   0.00000, 0.00000, 239.63997);
	create_object_ext(1417, 2088.91187, -2384.07031, 12.80392,   0.00000, 0.00000, 389.58005);
	create_object_ext(2084, 2089.75122, -2379.27905, 12.53667,   0.00000, 0.00000, 8.70000);
	create_object_ext(2084, 2090.05566, -2380.18433, 12.53667,   0.00000, 0.00000, 8.70000);
	create_object_ext(2084, 2090.05566, -2380.18433, 13.46000,   0.00000, 0.00000, 91.86000);
	create_object_ext(2032, 2092.16309, -2386.26538, 12.53128,   0.00000, 0.00000, 4.02000);
	create_object_ext(2032, 2093.11499, -2385.99487, 14.12624,   0.00000, 180.00000, 36.66000);
	create_object_ext(1463, 2153.94458, -2390.32422, 12.87500,   0.00000, 0.00000, 67.91999);
	create_object_ext(1412, 2147.33740, -2391.79419, 13.75250,   0.00000, 0.00000, 540.06012);
	create_object_ext(1412, 2155.29248, -2389.13428, 13.75250,   0.00000, 0.00000, 88.14000);
	create_object_ext(1412, 2155.42383, -2383.94434, 13.75250,   0.00000, 0.00000, 88.14000);
	create_object_ext(1412, 2152.59570, -2391.79517, 13.75250,   0.00000, 0.00000, 540.06012);
	create_object_ext(1463, 2154.40942, -2388.66064, 12.87500,   0.00000, 0.00000, 83.99999);
	create_object_ext(1463, 2154.45557, -2386.93799, 12.87500,   0.00000, 0.00000, 95.10000);
	create_object_ext(1463, 2154.46680, -2385.33813, 12.87500,   0.00000, 0.00000, 91.92000);
	create_object_ext(1463, 2154.35718, -2383.85083, 12.87500,   0.00000, 0.00000, 100.37999);
	create_object_ext(1463, 2154.03003, -2382.82886, 12.60295,   -6.72000, -0.72000, 100.37999);
	create_object_ext(1463, 2153.35864, -2382.46533, 12.63170,   0.00000, 0.00000, 108.66000);
	create_object_ext(1463, 2153.27661, -2383.73950, 12.71281,   0.00000, 0.00000, 102.05999);
	create_object_ext(1463, 2152.48242, -2382.72144, 12.55061,   0.00000, 0.00000, 110.21999);
	create_object_ext(1463, 2153.91382, -2385.97998, 12.87500,   0.00000, 0.00000, 82.92001);
	create_object_ext(1463, 2153.67285, -2387.41016, 12.87500,   0.00000, 0.00000, 79.25999);
	create_object_ext(1463, 2153.51196, -2388.88647, 12.87500,   0.00000, 0.00000, 69.53998);
	create_object_ext(1463, 2152.90771, -2390.40405, 12.87500,   0.00000, 0.00000, 54.89997);
	create_object_ext(1463, 2153.10181, -2384.47192, 12.71281,   -11.52000, -0.30000, 102.05999);
	create_object_ext(1463, 2152.75659, -2384.07104, 12.55061,   0.00000, 0.00000, 94.73998);
	create_object_ext(1463, 2152.20850, -2390.80566, 12.85897,   0.30000, -2.94000, 36.53998);
	create_object_ext(1463, 2152.44629, -2389.60840, 12.85618,   0.00000, 0.00000, 52.73997);
	create_object_ext(941, 2140.34497, -2395.93579, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2133.40454, -2395.93579, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2127.31909, -2395.93579, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2120.53687, -2395.93579, 12.95624,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2120.53687, -2400.25000, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2120.53687, -2404.22607, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2120.53687, -2407.98120, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2127.31909, -2400.25000, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2127.31909, -2404.22607, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2127.31909, -2407.98120, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2133.40454, -2400.25000, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2133.40454, -2404.22607, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2133.40454, -2407.98120, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2140.34497, -2400.25000, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2140.34497, -2404.22607, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2140.34497, -2407.98120, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(1226, 2137.85986, -2391.72729, 15.24476,   0.00000, 0.00000, 0.00000);
	create_object_ext(1226, 2122.29590, -2391.50195, 15.24480,   0.00000, 0.00000, 180.00000);

    //pescador
	CreateDynamicObjectEx(1243, 3445.34155, 349.29059, -3.04175,   0.00000, 0.00000, 0.00000, 1000.000, 1000.000);
	CreateObject(6300, 2932.99023, -1518.70020, -7.23000,   0.00000, 0.00000, 349.99701, 1000.000);
	CreateDynamicObjectEx(1461, 2957.39990, -1484.19995, 1.60000,   0.00000, 0.00000, 349.99701, 1000.000, 1000.000);
	CreateDynamicObjectEx(11496, 2950.10010, -1510.00000, 0.60000,   0.00000, 0.00000, 350.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(11496, 2953.36011, -1491.30005, 0.60000,   0.00000, 0.00000, 349.99701, 1000.000, 1000.000);
	CreateDynamicObjectEx(11496, 2954.08301, -1547.88391, 0.60000,   0.00000, 0.00000, 349.99701, 1000.000, 1000.000);
	CreateDynamicObjectEx(1461, 2940.69995, -1541.30005, 1.60000,   0.00000, 0.00000, 80.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(1461, 2946.10010, -1516.59998, 1.60000,   0.00000, 0.00000, 79.99700, 1000.000, 1000.000);
	CreateDynamicObjectEx(1461, 2951.10010, -1494.19995, 1.60000,   0.00000, 0.00000, 79.99700, 1000.000, 1000.000);
	CreateDynamicObjectEx(11496, 2949.10010, -1556.09961, 0.60000,   0.00000, 0.00000, 259.99701, 1000.000, 1000.000);
	CreateDynamicObjectEx(6300, 2932.97998, -1518.68994, -13.00000,   0.00000, 0.00000, 349.99701, 1000.000, 1000.000);
	CreateDynamicObjectEx(6300, 2932.99097, -1518.70996, -48.80000,   0.00000, 0.00000, 349.99701, 1000.000, 1000.000);
	CreateDynamicObjectEx(1231, 2952.10010, -1489.19995, 3.20000,   0.00000, 0.00000, 260.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(1231, 2946.80005, -1514.59998, 3.20000,   0.00000, 0.00000, 259.99701, 1000.000, 1000.000);
	CreateDynamicObjectEx(1231, 2941.50000, -1538.09998, 3.20000,   0.00000, 0.00000, 259.99701, 1000.000, 1000.000);
	CreateDynamicObjectEx(1346, 2951.50000, -1463.00000, 11.29000,   0.00000, 0.00000, 260.25000, 1000.000, 1000.000);
	CreateDynamicObjectEx(11496, 2957.28345, -1529.70398, 0.60000,   0.00000, 0.00000, 349.99701, 1000.000, 1000.000);
	CreateDynamicObjectEx(12925, 2947.39551, -1552.71387, 0.83444,   0.00000, 0.00000, 169.56006, 1000.000, 1000.000);
	//trabajo carguero
	create_object_ext(3630, 2513.37305, -2116.18872, 13.99660,   0.00000, 0.00000, 0.00000);
	create_object_ext(3574, 2524.99780, -2109.63525, 15.19875,   0.00000, 0.00000, 90.00000);
	create_object_ext(3630, 2513.48999, -2099.52563, 13.99660,   0.00000, 0.00000, 180.00000);
	create_object_ext(3630, 2517.33325, -2107.45825, 13.99660,   0.00000, 0.00000, 90.00000);
	create_object_ext(3567, 2457.65186, -2075.63989, 11.68070,   0.00000, 0.00000, 0.00000);
	create_object_ext(3585, 2457.69653, -2080.18481, 13.36238,   0.00000, 0.00000, 90.00000);
	create_object_ext(3585, 2457.63306, -2071.12061, 13.36238,   0.00000, 0.00000, 90.00000);
	create_object_ext(1684, 2472.30884, -2119.50928, 13.99975,   0.00000, 0.00000, -180.00000);
	create_object_ext(155, 2450.79614, -2100.66895, 21.23367,   0.00000, 0.00000, 0.00000);
	create_object_ext(155, 2457.71436, -2071.13013, 13.56358,   88.86001, -62.03999, 0.00000);


	//-
	CreateDynamicObject(3055, 2334.94092, 2443.80249, 6.87549,   0.00000, 0.00000, 59.21999);
	CreateDynamicObject(3055, 2294.24707, 2498.66553, 4.39810,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1498, 2294.43848, 2492.88940, 2.46963,   0.00000, 0.00000, 90.00000);

	//playa - 38objs
	CreateDynamicObjectEx(1642, 187.73985, -1864.47510, 2.07770,   1.51739, 0.21888, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1643, 206.95432, -1865.37793, 1.98671,   1.51739, 0.36000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1640, 214.76517, -1855.53027, 2.20848,   1.46001, 0.06000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1598, 213.78955, -1855.70532, 2.36306,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(642, 213.90292, -1855.02112, 3.44502,   0.00000, 0.00000, 351.99097, 1000.0, 1000.0);
	CreateDynamicObjectEx(1643, 238.86661, -1858.55615, 2.03199,   1.69739, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1643, 220.58553, -1832.98364, 2.78199,   1.64001, 0.30000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1598, 221.65776, -1832.17578, 2.99103,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1642, 233.57324, -1845.42126, 2.38000,   1.58001, 0.10001, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(642, 250.79086, -1836.72156, 3.82584,   0.00000, 0.00000, 351.99097, 1000.0, 1000.0);
	CreateDynamicObjectEx(1642, 249.52429, -1835.61938, 2.62554,   1.63739, 0.15888, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1642, 270.47009, -1859.82471, 2.00070,   1.69739, 0.09888, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1598, 271.43616, -1860.32471, 2.27872,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1640, 274.01746, -1865.93896, 1.80330,   2.23739, 0.12000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1640, 260.96460, -1855.59912, 2.08730,   1.69739, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1598, 261.85809, -1855.03772, 2.40365,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(642, 272.16565, -1834.13062, 3.92584,   0.00000, 0.00000, 351.99097, 1000.0, 1000.0);
	CreateDynamicObjectEx(1643, 273.21225, -1835.08936, 2.67994,   1.69739, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1642, 287.07159, -1854.18396, 2.18097,   1.75739, 0.03888, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1598, 292.07675, -1860.26624, 2.30505,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1643, 293.10690, -1861.79858, 1.97199,   1.69739, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1215, 308.23422, -1867.64636, 2.40919,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1215, 303.88184, -1867.62988, 2.40963,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1215, 307.98300, -1840.68262, 3.15353,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1215, 303.96487, -1840.68152, 3.15734,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1215, 303.84180, -1817.74512, 3.82413,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1215, 308.09616, -1817.73950, 3.82016,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1569, 153.45000, -1946.93994, 4.33000,   4.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1243, 188.90680, -1951.98840, -2.54000,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1243, 214.20268, -1953.18396, -2.54000,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1243, 236.72771, -1954.81482, -2.54000,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1243, 257.90262, -1956.55359, -2.54000,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1243, 280.64215, -1958.29749, -2.54000,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(4245, 272.48438, -2012.19531, -15.47656,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1243, 321.30383, -1961.31836, -2.54000,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1243, 344.17053, -1961.64429, -2.54000,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1243, 359.09616, -1961.35449, -2.54000,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1243, 299.94800, -1959.06873, -2.54000,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);

	// CNN Ext | by Edinson Walker | 60 Objetos
	CreateDynamicObject(11544, 733.21167, -1365.43005, 24.45701,   0.00000, 0.00000, 179.79999);
	CreateDynamicObject(11544, 733.28497, -1359.12000, 24.45701,   0.00000, 0.00000, 359.79675);
	CreateDynamicObject(3934, 742.88409, -1371.27698, 24.69221,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3876, 721.75098, -1376.67383, 27.56019,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1694, 719.47748, -1339.83081, 36.57013,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 751.20898, -1330.85742, 13.09988,   0.00000, 0.00000, 359.29688);
	CreateDynamicObject(970, 759.44531, -1330.94824, 13.09969,   0.00000, 0.00000, 359.29688);
	CreateDynamicObject(970, 755.33008, -1330.90234, 13.09979,   0.00000, 0.00000, 359.29688);
	CreateDynamicObject(970, 749.14319, -1332.90100, 13.09540,   0.00000, 0.00000, 89.29688);
	CreateDynamicObject(970, 757.37109, -1332.99170, 13.09520,   0.00000, 0.00000, 89.29688);
	CreateDynamicObject(970, 753.26263, -1332.95496, 13.09528,   0.00000, 0.00000, 89.29688);
	CreateDynamicObject(970, 761.50116, -1333.04150, 13.09509,   0.00000, 0.00000, 89.29688);
	CreateDynamicObject(5837, 768.58295, -1332.14124, 14.26333,   0.00000, 0.00000, 177.99500);
	CreateDynamicObject(1223, 761.48291, -1335.24841, 12.53876,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1223, 754.40918, -1361.43262, 11.11260,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 648.04456, -1330.14172, 20.19147,   0.00000, 0.00000, 297.99866);
	CreateDynamicObject(1232, 647.73792, -1348.21631, 20.19147,   0.00000, 0.00000, 297.99316);
	CreateDynamicObject(2921, 781.89844, -1330.33691, 16.26960,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2921, 773.99976, -1384.79834, 16.42263,   0.00000, 0.00000, 186.00000);
	CreateDynamicObject(3522, 755.38379, -1368.49609, 12.59153,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(862, 755.23096, -1370.29395, 12.68120,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 754.36847, -1369.00464, 12.92332,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(859, 755.22089, -1366.68433, 12.68145,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(861, 755.28284, -1367.66296, 12.68145,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 647.84656, -1367.07043, 20.19147,   0.00000, 0.00000, 297.99316);
	CreateDynamicObject(1232, 647.81659, -1384.33496, 20.19147,   0.00000, 0.00000, 297.99316);
	CreateDynamicObject(1280, 647.23267, -1339.24219, 12.94823,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1280, 647.15228, -1375.67383, 13.07805,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(738, 644.89606, -1366.99109, 12.72225,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(792, 644.88678, -1348.50513, 12.64688,   0.00000, 0.00000, 0.00000);
	CreateDynamicObjectEx(3873, 699.70898, -1355.22559, 28.24851,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(7586, 699.70801, -1355.12500, 49.63910,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(10357, 702.12280, -1354.90942, 20.87460,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObject(717, 678.35925, -1388.48865, 12.70875,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(717, 699.71106, -1388.52637, 12.78964,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(717, 724.66650, -1388.47412, 12.78557,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(717, 675.83221, -1326.12366, 12.76604,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(717, 698.34253, -1326.02344, 12.76604,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(717, 721.59460, -1326.03455, 12.76604,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3666, 738.95190, -1374.79175, 24.70590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3666, 746.64551, -1367.93359, 24.70590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3666, 746.58398, -1374.79785, 24.70590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3666, 739.00482, -1367.96008, 24.70590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObjectEx(8550, 655.64587, -1357.12720, 25.01492,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObject(1215, 754.41406, -1359.99023, 25.19000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 754.29749, -1384.08496, 25.25653,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, 750.94049, -1359.19177, 21.33766,   0.00000, 0.00000, 269.98901);
	CreateDynamicObject(638, 743.58636, -1359.17859, 21.33766,   0.00000, 0.00000, 269.98901);
	CreateDynamicObject(2946, 748.85895, -1359.59802, 20.64063,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2946, 745.69000, -1359.59766, 20.64063,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1215, 740.78064, -1354.32971, 21.20292,   0.00000, 0.00000, 12.00000);
	CreateDynamicObject(1483, 747.22998, -1358.35999, 22.40000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(970, 747.10284, -1330.83691, 13.09988,   0.00000, 0.00000, 359.29688);
	CreateDynamicObject(970, 744.99109, -1332.86707, 13.09540,   0.00000, 0.00000, 89.29688);
	CreateDynamicObject(970, 742.97632, -1330.78296, 13.09988,   0.00000, 0.00000, 359.29688);
	CreateDynamicObject(970, 740.86353, -1332.82605, 13.09540,   0.00000, 0.00000, 89.29688);
	CreateDynamicObject(970, 738.83606, -1330.73743, 13.09988,   0.00000, 0.00000, 359.29688);
	CreateDynamicObject(970, 736.74249, -1332.77893, 13.09540,   0.00000, 0.00000, 89.35687);
	CreateDynamicObject(1223, 736.72314, -1334.92969, 12.53876,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(717, 785.45599, -1383.00586, 12.78366,   0.00000, 0.00000, 0.06000);

	// vip exterior, amrp - 5obj
	CreateDynamicObjectEx(1557, 1673.69214, -1714.68701, 12.54688,   0.00000, 0.00000, 270.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1557, 1673.69958, -1717.71777, 12.54688,   0.00000, 0.00000, 90.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1215, 1673.93359, -1714.54590, 13.11120,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1215, 1673.90820, -1717.88806, 13.11120,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);

	//Vallas del canal de desagüe - nexusrp
	CreateDynamicObject(973,1579.9000000,-1757.4000000,13.0000000,0.0000000,0.0000000,90.0000000);
	CreateDynamicObject(973,1579.9000000,-1751.0000000,13.0000000,0.0000000,0.0000000,90.0000000);
	CreateDynamicObject(973,1580.5110000,-1771.5000000,12.7500000,0.0000000,358.0000000,93.0000000);
	CreateDynamicObject(973,1579.9000000,-1757.4000000,13.9000000,0.0000000,0.0000000,90.0000000);
	CreateDynamicObject(973,1579.9000000,-1751.0000000,13.8900000,0.0000000,0.0000000,90.0000000);
	CreateDynamicObject(973,1580.5100000,-1771.5000000,13.7000000,0.0000000,357.9950000,92.9990000);
	CreateDynamicObject(973,1679.0000000,-1788.0000000,12.8000000,0.0000000,0.0000000,269.9950000);
	CreateDynamicObject(973,1358.7000000,-1722.1000000,13.0000000,0.0000000,0.0000000,180.0000000);
	CreateDynamicObject(973,1358.7000000,-1722.0900000,13.9000000,0.0000000,0.0000000,179.9950000);
	CreateDynamicObject(973,1360.0000000,-1722.1000000,13.0000000,0.0000000,0.0000000,179.9950000);
	CreateDynamicObject(973,1360.0000000,-1722.0800000,13.8900000,0.0000000,0.0000000,179.9950000);
	CreateDynamicObject(973,1359.9000000,-1684.2000000,13.3000000,0.0000000,0.0000000,0.0000000);
	CreateDynamicObject(973,1359.9000000,-1684.1900000,14.2000000,0.0000000,0.0000000,0.0000000);
	CreateDynamicObject(973,1358.8000000,-1684.1900000,13.3000000,0.0000000,0.0000000,0.0000000);
	CreateDynamicObject(973,1358.8000000,-1684.1800000,14.1900000,0.0000000,0.0000000,0.0000000);
	CreateDynamicObject(973,1359.7000000,-1618.7000000,13.3000000,0.0000000,0.0000000,180.0000000);
	CreateDynamicObject(973,1358.4000000,-1618.6900000,13.3000000,0.0000000,0.0000000,179.9950000);
	CreateDynamicObject(973,1359.7000000,-1618.7000000,14.2000000,0.0000000,0.0000000,179.9950000);
	CreateDynamicObject(973,1358.4000000,-1618.6900000,14.2000000,0.0000000,0.0000000,179.9950000);
	CreateDynamicObject(973,1363.6000000,-1592.5000000,13.2000000,0.0000000,0.0000000,344.0000000);
	CreateDynamicObject(973,1363.6000000,-1592.5000000,14.1000000,0.0000000,0.0000000,343.9980000);
	CreateDynamicObject(973,1362.4000200,-1592.1099900,13.2000000,0.0000000,0.0000000,344.0000000);
	CreateDynamicObject(973,1362.4000000,-1592.1000000,14.1200000,0.0000000,0.0000000,343.9980000);
	CreateDynamicObject(973,1367.5000000,-1573.7000000,13.2000000,0.0000000,0.0000000,164.0000000);
	CreateDynamicObject(973,1368.6000000,-1574.0000000,13.2000000,0.0000000,0.0000000,163.9980000);
	CreateDynamicObject(973,1368.6500000,-1573.9000000,13.9000000,0.0000000,0.0000000,163.9980000);
	CreateDynamicObject(973,1367.4000000,-1573.5400000,13.8900000,0.0000000,0.0000000,163.9980000);
	CreateDynamicObject(973,1402.4000000,-1450.4000000,13.1000000,0.0000000,0.0000000,0.0000000);
	CreateDynamicObject(973,1401.2000000,-1450.4000000,13.1000000,0.0000000,0.0000000,0.0000000);
	CreateDynamicObject(973,1402.4000000,-1450.4000000,13.8000000,0.0000000,0.0000000,0.0000000);
	CreateDynamicObject(973,1401.1900000,-1450.4000000,13.8000000,0.0000000,0.0000000,0.0000000);

    // ——— leñador
	create_object_ext(17457, -570.88019, -1490.22913, 10.51511,   -1.98000, -1.32000, -142.08002);
	create_object_ext(3286, -566.70563, -1479.84790, 13.35605,   0.60000, 1.08000, 16.55999);
	create_object_ext(3419, -553.42316, -1491.11450, 8.40726,   -0.60000, -2.04000, 38.64000);

	//- Deposito | By Edinson
	CreateDynamicObject(5837, -481.48563, -558.42505, 25.97714,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3458, -517.94897, -558.83051, 25.93505,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1597, -480.77600, -480.04428, 27.05149,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1597, -501.88507, -479.65829, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(1597, -522.32013, -480.08255, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(1597, -543.15369, -480.01431, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(1597, -562.80817, -480.17029, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(1597, -583.58685, -480.20047, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(6296, -504.66312, -522.02258, 26.62269,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(737, -469.13492, -559.99615, 24.63004,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(737, -504.24918, -506.07968, 24.67746,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(737, -504.05792, -539.75946, 24.67746,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, -485.51678, -561.37286, 24.83320,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, -488.17297, -561.37085, 24.83320,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, -483.79755, -562.34674, 24.83315,   0.00000, 0.00000, 90.00000);

	// ——— Garage BCSD
	CreateDynamicObject(10051, 1388.54358, 1354.55640, 10.01410,   0.00000, 0.00000, 0.00000, -1, 12);
	CreateDynamicObject(8378, 1347.08044, 1383.21814, 12.91029,   0.00000, 0.00000, 90.00000, -1, 12);

	// ——— bug door in ganton — 1 objeto
	CreateDynamicObject(1498, 2401.76562500, -1714.42370600, 13.14058300, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);

	// ——— banco interior — EdinsonWalker — 44 objetos
	CreateDynamicObject(19450, -1537.65881, 329.22021, 54.27770,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1542.52063, 319.61029, 54.27770,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1531.46594, 329.24762, 54.27770,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1532.86572, 330.07721, 54.27770,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(19450, -1528.27808, 324.38660, 54.27770,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(19450, -1542.40112, 324.47269, 54.27770,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(19450, -1536.29663, 310.22574, 54.27770,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1533.06201, 319.65121, 54.27770,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1533.06201, 310.08640, 54.27770,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1541.02576, 314.97348, 54.27770,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(1536, -1536.36438, 330.01147, 52.51820,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(1536, -1533.34924, 330.05267, 52.51820,   0.00000, 0.00000, 180.00000, -1, 10);
	CreateDynamicObject(1536, -1531.48962, 326.23535, 52.51820,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(1703, -1533.66980, 322.07257, 52.57190,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(1703, -1535.76660, 322.07260, 52.57190,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(1703, -1533.66980, 318.92349, 52.57190,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(1703, -1535.76660, 318.92349, 52.57190,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(19450, -1533.34058, 309.28860, 54.27770,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(1536, -1536.23059, 311.62656, 52.51820,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(1536, -1535.43433, 309.31665, 52.51820,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(1806, -1541.87512, 323.01889, 52.54990,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(1806, -1541.87512, 320.79800, 52.54990,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(1806, -1541.87512, 318.43799, 52.54990,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(2008, -1540.63892, 323.80502, 52.55010,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(2008, -1540.65002, 321.42059, 52.55010,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(2008, -1540.66809, 319.14874, 52.55010,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(19450, -1540.02429, 322.26819, 56.27690,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1540.03186, 322.27670, 51.76950,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2773, -1539.16785, 322.18600, 52.96980,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(2773, -1539.16785, 319.66949, 52.96976,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(19450, -1544.77551, 317.55533, 54.27770,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(1536, -1542.45520, 320.03131, 52.51820,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(957, -1541.19080, 318.43799, 55.96720,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(957, -1541.19080, 320.79800, 55.96720,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(957, -1541.19080, 323.01889, 55.96720,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2195, -1533.59680, 322.89450, 53.14320,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2195, -1533.59680, 316.10858, 53.14320,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2108, -1535.60291, 319.49460, 52.51200,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2108, -1533.68872, 319.49460, 52.51200,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(4604, -1534.38599, 314.16910, 52.49001,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2885, -1537.00110, 318.51682, 56.19600,   270.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2885, -1537.00110, 312.00070, 56.19600,   270.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2885, -1537.00110, 325.09451, 56.19600,   270.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2885, -1535.21655, 331.56821, 56.19604,   270.00000, 0.00000, 0.00000, -1, 10);

	// ——— hospital interior — nexus — 302 objetos
	CreateObject(7419, -183.66400, -1735.85437, 632.45679,   0.00000, -90.00000, 0.00000);
	CreateObject(7419, -230.80400, -1754.06995, 632.45679,   0.00000, -90.00000, 180.00000);
	CreateDynamicObject(2885, -200.89941, -1741.50000, 678.40002,   270.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2885, -211.79980, -1734.79980, 678.40002,   270.00000, 180.00000, 180.00000, -1, 15);
	CreateDynamicObject(2885, -200.89941, -1734.79980, 678.40002,   270.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2885, -211.79980, -1741.50000, 678.40002,   270.00000, 179.99451, 179.99451, -1, 15);
	CreateDynamicObject(2885, -200.89999, -1748.19995, 678.40002,   270.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2885, -200.89941, -1754.89941, 678.40002,   270.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2885, -200.89941, -1761.59961, 678.40002,   270.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2885, -200.89999, -1768.30005, 678.40002,   270.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2885, -211.79980, -1748.19922, 678.40002,   270.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2885, -211.80000, -1754.90002, 678.40002,   270.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2885, -211.79980, -1761.59961, 678.40002,   270.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -207.39999, -1739.69995, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.39900, -1739.69995, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -202.60001, -1734.80005, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -206.20000, -1734.80103, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1569, -206.00000, -1734.90002, 674.79999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(1569, -203.00000, -1734.90002, 674.79999,   0.00000, 0.00000, 180.00000, -1, 15);
	CreateDynamicObject(19387, -196.69922, -1744.50000, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19357, -201.39941, -1736.50000, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.40039, -1736.50000, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -196.60001, -1738.01599, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -196.67200, -1738.01697, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19449, -195.39941, -1742.89941, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -195.40100, -1742.90002, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -201.10001, -1739.69995, 674.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -201.10260, -1739.69922, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19357, -199.88379, -1744.50000, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -191.15039, -1744.49902, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -191.15039, -1744.50098, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -199.07500, -1744.49902, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -199.07500, -1744.50098, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -199.88499, -1744.49805, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -201.09900, -1739.59998, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19357, -201.39941, -1746.09961, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19387, -201.39941, -1749.29980, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19357, -201.39999, -1752.50000, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19387, -201.39999, -1755.69995, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19357, -201.39999, -1758.90002, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.40199, -1746.09998, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.40100, -1746.92505, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19387, -201.39941, -1762.09961, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -206.20000, -1763.69995, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -201.40100, -1751.63696, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.40199, -1753.32495, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.40100, -1758.03699, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.40199, -1759.72498, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.40100, -1764.43701, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -206.30000, -1763.69897, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19387, -207.39941, -1746.09961, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19387, -207.39941, -1758.89941, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19357, -207.39999, -1762.09998, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -195.39941, -1752.50000, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -195.39941, -1762.09961, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -196.59961, -1758.79980, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -206.00000, -1733.29980, 672.59998,   270.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -203.00000, -1733.30005, 672.59998,   270.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19441, -203.71400, -1733.30103, 677.39801,   0.00000, 270.00000, 90.00000, -1, 15);
	CreateDynamicObject(19441, -205.28700, -1733.30200, 677.39697,   0.00000, 270.00000, 90.00000, -1, 15);
	CreateDynamicObject(19449, -214.60001, -1758.90002, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -214.59961, -1749.29980, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -214.60001, -1739.69995, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -212.19922, -1734.79980, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -199.80000, -1744.50110, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -201.39799, -1746.09998, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.39900, -1746.92505, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.39900, -1751.63696, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.39700, -1753.32422, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.39900, -1758.03699, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.39799, -1759.72498, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -195.40100, -1752.50000, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -195.40039, -1762.09961, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -196.64941, -1758.79883, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -196.64941, -1758.80078, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -207.39799, -1740.51404, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -207.39700, -1761.23706, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -207.39799, -1764.40002, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -214.59900, -1758.80005, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -214.59801, -1749.19995, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -214.59900, -1739.59998, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -215.80000, -1734.80115, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -207.40100, -1739.69995, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.40137, -1740.51367, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -207.40120, -1761.23706, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -207.40100, -1764.39941, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(3034, -204.39941, -1763.59961, 676.70001,   0.00000, 0.00000, 179.99451, -1, 15);
	CreateDynamicObject(1523, -201.37000, -1756.44995, 674.73999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1523, -201.36914, -1750.04980, 674.73999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1523, -201.37000, -1762.84998, 674.73999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2686, -201.51300, -1744.90002, 676.40002,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(2685, -201.51300, -1745.40002, 676.40002,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(2688, -207.29980, -1747.59961, 676.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(16101, -201.50000, -1748.50000, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.50000, -1750.00000, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.50000, -1754.90002, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.50000, -1756.40002, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.50000, -1761.30005, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.50000, -1762.80005, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.32910, -1748.50000, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.33000, -1750.00000, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.33000, -1754.90002, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.33000, -1756.40002, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.33000, -1761.30005, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.33000, -1762.80005, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14487, -211.80000, -1751.50000, 678.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14487, -211.79980, -1729.59961, 678.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14487, -218.59961, -1729.59961, 678.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14487, -218.60001, -1754.30005, 678.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14487, -190.89941, -1753.59961, 678.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14487, -190.89999, -1735.19995, 678.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14487, -190.89941, -1731.69922, 678.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(1523, -207.36914, -1746.84961, 674.73999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1523, -207.37000, -1759.65002, 674.73999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(16101, -207.32910, -1745.29980, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -207.33000, -1746.81995, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -207.33000, -1758.09998, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -207.33000, -1759.62000, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -207.50000, -1759.59998, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -207.50000, -1758.09998, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -207.50000, -1746.80005, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -207.50000, -1745.29980, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(1999, -200.50000, -1740.39941, 674.79999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2009, -199.50000, -1743.79980, 674.79999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1671, -199.50000, -1739.30005, 675.20001,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(1671, -199.29980, -1743.00000, 675.20001,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(19387, -213.00000, -1742.69922, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19357, -209.79980, -1742.69922, 673.90100,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19357, -209.00000, -1742.70020, 673.90002,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19449, -212.20000, -1742.69897, 679.00000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19466, -208.50000, -1742.69995, 676.40002,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19466, -210.74023, -1742.69922, 676.40002,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -209.00000, -1742.69897, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -210.66400, -1742.69800, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -215.37399, -1742.69897, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -215.37500, -1742.70020, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -209.00000, -1742.70117, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -210.66400, -1742.70215, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1523, -213.78906, -1742.72949, 674.73999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -212.29980, -1742.79980, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -213.80000, -1742.80005, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -213.80000, -1742.59998, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -212.30000, -1742.59998, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -207.50000, -1742.69922, 666.90002,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14487, -218.60001, -1731.80005, 678.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2007, -213.69922, -1735.39941, 674.79999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2007, -212.69922, -1735.39941, 674.79999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(3657, -206.89999, -1754.59998, 675.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2811, -201.89941, -1735.39941, 674.79999,   0.00000, 0.00000, 139.99329, -1, 15);
	CreateDynamicObject(2811, -201.89999, -1763.19995, 674.79999,   0.00000, 0.00000, 219.99573, -1, 15);
	CreateDynamicObject(2811, -206.89999, -1763.19995, 674.79999,   0.00000, 0.00000, 149.99573, -1, 15);
	CreateDynamicObject(3657, -206.89999, -1739.59998, 675.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2811, -206.89941, -1735.39941, 674.79999,   0.00000, 0.00000, 221.98975, -1, 15);
	CreateDynamicObject(2688, -201.50000, -1760.50000, 676.40002,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(19460, -201.50000, -1739.69995, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.30000, -1739.69995, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.30000, -1749.30005, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.30000, -1758.90002, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -201.50000, -1749.30005, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -201.50000, -1758.90002, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -204.80000, -1734.90002, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -206.39999, -1763.59998, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -214.50000, -1758.90002, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -214.50000, -1749.30005, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -214.50000, -1739.69995, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.50000, -1758.90002, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.50000, -1749.30005, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.50000, -1739.69995, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -214.39999, -1734.90002, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -212.20000, -1742.80005, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -212.20000, -1742.59998, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -196.60001, -1744.40002, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -196.60001, -1738.09998, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -196.60001, -1744.59998, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -196.60001, -1758.69995, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -196.60001, -1758.90002, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -195.50000, -1758.90002, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -195.50000, -1749.30005, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -195.50000, -1739.69995, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19357, -209.00000, -1748.80103, 673.90100,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19449, -207.39999, -1752.50000, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.40100, -1751.59998, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.39900, -1751.59998, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.40199, -1753.30005, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.39799, -1753.30005, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(3657, -206.89999, -1750.40002, 675.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19387, -213.00000, -1748.80005, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19449, -212.20000, -1748.80103, 679.00000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19357, -209.80000, -1748.80005, 673.90002,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19466, -208.60001, -1748.80005, 676.40002,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19466, -210.84050, -1748.80005, 676.40002,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19449, -212.20000, -1756.19995, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1523, -213.78900, -1748.82996, 674.73999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -212.20000, -1748.69995, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -212.20000, -1748.90002, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -212.20000, -1756.09998, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -212.30000, -1756.19897, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -209.00000, -1748.79895, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -210.66299, -1748.79797, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -210.66211, -1748.80273, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -209.00000, -1748.80176, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -215.37500, -1748.79895, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -215.37500, -1748.80078, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(3397, -208.20000, -1750.80005, 674.79999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(3396, -208.20000, -1754.40002, 674.79999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -212.20000, -1756.30005, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(2132, -209.89999, -1755.59998, 674.79999,   0.00000, 0.00000, 180.00000, -1, 15);
	CreateDynamicObject(2007, -212.30000, -1755.59998, 674.79999,   0.00000, 0.00000, 180.00000, -1, 15);
	CreateDynamicObject(2007, -213.30000, -1755.59998, 674.79999,   0.00000, 0.00000, 179.99451, -1, 15);
	CreateDynamicObject(3394, -213.80000, -1752.19995, 674.79999,   0.00000, 0.00000, 179.99451, -1, 15);
	CreateDynamicObject(2146, -211.10001, -1751.90002, 675.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14532, -210.70000, -1753.50000, 675.79999,   0.00000, 0.00000, 14.00000, -1, 15);
	CreateDynamicObject(19460, -212.29980, -1756.20020, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(3657, -201.89941, -1746.50000, 675.29999,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(2811, -211.81781, -1742.24426, 674.79999,   0.00000, 0.00000, 251.98975, -1, 15);
	CreateDynamicObject(2811, -214.15007, -1748.04089, 674.79999,   0.00000, 0.00000, 295.98798, -1, 15);
	CreateDynamicObject(16101, -207.50000, -1748.80005, 666.90002,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(3394, -213.80000, -1761.50000, 674.79999,   0.00000, 0.00000, 179.99451, -1, 15);
	CreateDynamicObject(2007, -214.00000, -1758.59998, 674.79999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2007, -214.00000, -1757.59998, 674.79999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2132, -210.10001, -1763.09998, 674.79999,   0.00000, 0.00000, 179.99451, -1, 15);
	CreateDynamicObject(3396, -208.20000, -1761.69995, 674.79999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(3397, -210.80000, -1756.69995, 674.79999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2146, -211.20000, -1759.90002, 675.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(11237, -230.00000, -1760.40002, 698.90002,   0.00000, 180.00000, 180.00000, -1, 15);
	CreateDynamicObject(3053, -211.20000, -1760.40002, 678.40002,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -211.20000, -1760.40002, 688.09998,   0.00000, 180.00000, 0.00000, -1, 15);
	CreateDynamicObject(2596, -214.30000, -1760.09998, 676.70001,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2596, -214.30000, -1760.80005, 676.70001,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2596, -214.30000, -1760.80005, 677.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2596, -214.30000, -1760.09998, 677.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(16101, -222.60001, -1760.40002, 677.90002,   0.00000, 90.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -214.50000, -1760.40002, 666.19385,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(3808, -207.25000, -1757.80005, 676.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(3808, -212.00000, -1742.84998, 676.29999,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(3808, -212.00000, -1748.66003, 676.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -201.30000, -1749.50000, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -201.30000, -1759.09998, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(2009, -199.50000, -1747.80005, 674.79999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1999, -200.50000, -1746.09998, 674.80103,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1671, -199.39999, -1746.90002, 675.20001,   0.00000, 0.00000, 264.00000, -1, 15);
	CreateDynamicObject(1671, -199.39999, -1745.09998, 675.20001,   0.00000, 0.00000, 278.00000, -1, 15);
	CreateDynamicObject(2009, -196.80000, -1753.80005, 674.80103,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1999, -197.80000, -1752.09998, 674.79999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1999, -198.70000, -1752.80005, 674.79999,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(2009, -199.70000, -1751.09998, 674.80103,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(1671, -197.60001, -1753.00000, 675.20001,   0.00000, 0.00000, 282.00000, -1, 15);
	CreateDynamicObject(1671, -196.80000, -1751.30005, 675.20001,   0.00000, 0.00000, 260.00000, -1, 15);
	CreateDynamicObject(1671, -199.80000, -1752.09998, 675.20001,   0.00000, 0.00000, 84.00000, -1, 15);
	CreateDynamicObject(1671, -199.80000, -1753.80005, 675.20001,   0.00000, 0.00000, 104.00000, -1, 15);
	CreateDynamicObject(2009, -196.00000, -1757.19995, 674.79999,   0.00000, 0.00000, 180.00000, -1, 15);
	CreateDynamicObject(1999, -197.70000, -1758.19995, 674.80103,   0.00000, 0.00000, 180.00000, -1, 15);
	CreateDynamicObject(1671, -196.89999, -1757.30005, 675.20001,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(1671, -198.70000, -1758.00000, 675.20001,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2202, -196.00000, -1746.19995, 674.78003,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(2811, -195.89999, -1745.09998, 674.79999,   0.00000, 0.00000, 115.99329, -1, 15);
	CreateDynamicObject(2007, -196.00000, -1748.30005, 674.79999,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(2007, -196.00000, -1749.30005, 674.79999,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(2811, -200.89999, -1758.30005, 674.79999,   0.00000, 0.00000, 141.98816, -1, 15);
	CreateDynamicObject(2611, -198.20000, -1758.67004, 676.79999,   0.00000, 0.00000, 180.00000, -1, 15);
	CreateDynamicObject(2611, -201.27000, -1746.40002, 676.59998,   0.00000, 0.00000, 89.99451, -1, 15);
	CreateDynamicObject(19449, -215.80000, -1763.69995, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19449, -201.39999, -1768.50000, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -195.39999, -1771.69995, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -201.39900, -1767.57996, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -195.40100, -1771.69995, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -195.50000, -1768.50000, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -201.30000, -1768.69995, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19449, -196.60001, -1772.40002, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -196.60001, -1772.39905, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -196.60001, -1772.30005, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(14487, -190.89999, -1778.19995, 678.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(1789, -211.80000, -1753.09998, 675.29999,   0.00000, 0.00000, 290.00000, -1, 15);
	CreateDynamicObject(1789, -211.89941, -1759.19922, 675.29999,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(1800, -199.00000, -1759.50000, 674.70001,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(1800, -199.00000, -1771.50000, 674.70001,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(1800, -199.00000, -1767.59998, 674.70001,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(1800, -199.00000, -1763.69995, 674.70001,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(1800, -200.70000, -1766.90002, 674.70001,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(1800, -200.70000, -1773.30005, 674.70001,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(1789, -196.20000, -1770.69995, 675.29999,   0.00000, 0.00000, 180.00000, -1, 15);
	CreateDynamicObject(1789, -196.20000, -1766.69995, 675.29999,   0.00000, 0.00000, 179.99451, -1, 15);
	CreateDynamicObject(1789, -196.20000, -1762.90002, 675.29999,   0.00000, 0.00000, 179.99451, -1, 15);
	CreateDynamicObject(1789, -196.30000, -1760.69995, 675.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(1789, -200.50000, -1766.19995, 675.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(1789, -200.50000, -1769.40002, 675.29999,   0.00000, 0.00000, 180.00000, -1, 15);
	CreateDynamicObject(19460, -216.00000, -1763.59998, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(1999, -197.50000, -1740.40002, 674.79999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1671, -196.50000, -1739.30005, 675.20001,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(19460, -215.89999, -1763.69897, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(16101, -212.30000, -1748.69995, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -213.80000, -1748.69995, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -213.80000, -1748.90002, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -212.30000, -1748.90002, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2852, -206.80000, -1742.80005, 675.28003,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2315, -206.80000, -1742.40002, 674.79999,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(2855, -206.70000, -1743.69995, 675.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14782, -207.81520, -1738.64648, 675.77350,   0.00000, 0.00000, -90.00000, -1, 15);
	CreateDynamicObject(1368, -210.13393, -1735.39819, 675.46796,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19176, -214.55238, -1745.80981, 676.14948,   0.00000, 0.00000, -90.00000, -1, 15);
	CreateDynamicObject(2811, -214.15262, -1743.50281, 674.79999,   0.00000, 0.00000, 295.98798, -1, 15);


	// ——— garajes interiores — EdinsonWalker
	new
		garg
	;
    // ———
	CreateObject(3354, -2460.04688, -626.38354, 13.01109,   0.00000, 0.00000, 90.00000);
	CreateObject(3354, -2412.56616, -642.18176, 12.99715,   0.00000, 0.00000, 90.00000);
	CreateObject(3354, -2397.39404, -598.26202, 13.01110,   0.00000, 0.00000, 133.32021);
	// ——— Pequeño
	garg = CreateObject(18981, -2461.87158, -633.33533, 11.23182,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 14669, "711c", "bwtilebroth", 0);
	garg = CreateObject(18981, -2461.91162, -633.33679, 16.82644,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2458.95630, -637.70593, 11.71500,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2455.97437, -630.51752, 11.71500,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2466.09595, -630.39453, 11.71500,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2458.91211, -625.88312, 11.71500,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);

	// ——— Mediano
	garg = CreateObject(18981, -2413.29858, -636.12415, 11.23182,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 14669, "711c", "bwtilebroth", 0);
	garg = CreateObject(18981, -2413.29858, -636.12415, 17.22640,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2406.50415, -634.00873, 11.23180,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2415.04199, -642.64331, 11.23180,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2423.60986, -639.16626, 11.23180,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2415.74731, -629.33917, 11.23180,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);

	// ——— Grande
	garg = CreateObject(18981, -2402.85938, -592.28430, 11.33661,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 14669, "711c", "bwtilebroth", 0);
	garg = CreateObject(18981, -2402.85938, -592.28430, 18.15434,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2402.52710, -581.26819, 11.23180,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2396.96826, -598.51227, 11.23180,   0.00000, 0.00000, 133.32021);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2412.33765, -592.73846, 11.23180,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2408.76904, -603.04407, 11.23180,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2391.55151, -589.30396, 11.23180,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);

	// ———  VIP interior — EdinsonWalker — 48 objetos
	new vip;
	vip = CreateDynamicObject(18981, -2312.12012, 176.00507, 40.90909,   0.00000, 90.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 14669, "711c", "bwtilebroth", 0);
	vip = CreateDynamicObject(18981, -2312.12012, 176.00507, 33.84071,   0.00000, 90.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 14669, "711c", "bwtilebroth", 0);
	vip = CreateDynamicObject(18981, -2310.21997, 185.58154, 34.33010,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 16639, "triadprops_lvs", "pagodaroof4", 0);
	vip = CreateDynamicObject(18981, -2306.54492, 168.78226, 34.33010,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 16639, "triadprops_lvs", "pagodaroof4", 0);
	vip = CreateDynamicObject(18981, -2300.25610, 176.28162, 34.33012,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 16639, "triadprops_lvs", "walpaper_dragn", 0);
	vip = CreateDynamicObject(18981, -2317.55054, 176.00523, 34.33012,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 16639, "triadprops_lvs", "walpaper_dragn", 0);
	CreateDynamicObject(14782, -2301.08594, 173.50267, 35.27818,   0.00000, 0.00000, -90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2773, -2302.33643, 176.29814, 34.85120,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2773, -2303.31592, 175.35020, 34.83290,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(18885, -2304.57178, 169.64328, 35.41940,   0.00000, 0.00000, 180.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2773, -2305.49854, 171.11031, 34.83290,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2773, -2304.23950, 174.37891, 34.85120,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19125, -2305.56519, 169.54500, 34.53240,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2302.63916, 169.61447, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2299.97900, 169.61218, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19125, -2301.00928, 172.50560, 34.53237,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2315.71436, 184.32672, 34.29805,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1569, -2300.83130, 181.89047, 34.25342,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.95142, 183.70245, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3533, -2317.14917, 185.42450, 36.64207,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3533, -2300.29199, 185.29639, 36.64207,   0.00000, 0.00000, 0.06000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3533, -2300.25146, 169.14325, 36.64207,   0.00000, 0.00000, 0.06000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3533, -2317.29077, 169.08047, 36.64207,   0.00000, 0.00000, 0.06000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2312.09448, 184.31015, 34.29810,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.91797, 176.08099, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.91870, 173.34589, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.93628, 170.60448, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.91748, 180.99863, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, -2308.89819, 181.89952, 35.93816,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, -2308.92456, 186.22101, 35.93816,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, -2308.89355, 175.18550, 35.93816,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, -2308.90820, 170.87070, 35.93816,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14608, -2313.09473, 171.20479, 35.76169,   0.00000, 0.00000, -44.27999, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2300.75024, 182.61356, 35.94881,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(11725, -2301.32983, 180.70349, 34.72287,   0.00000, 0.00000, -97.25999, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2725, -2312.99316, 182.97859, 34.71739,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2726, -2313.06274, 183.00795, 35.49006,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19128, -2312.42822, 175.15434, 34.32055,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2316.30835, 179.53941, 34.29810,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2316.38892, 175.74800, 34.29810,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3524, -2316.35669, 178.62827, 34.60627,   0.00000, 0.00000, 91.80000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2232, -2316.98535, 173.88535, 36.64071,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2232, -2317.02515, 183.12483, 36.64071,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2232, -2310.48535, 185.00037, 36.64070,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2307.42261, 184.73531, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2304.75415, 184.71144, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2302.06519, 184.70569, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2301.51392, 179.32788, 34.29810,   0.00000, 0.00000, -90.00000, -1, 5, -1, MAX_RADIO_STREAM);

	// ——— SAN interior — 123 objetos
	CreateObject(4604, 246.67168, 1776.46240, 700.09454,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, 250.44000, 1784.43994, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19450, 245.63000, 1779.93994, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19450, 253.91000, 1780.12000, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19450, 253.03000, 1775.83997, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19404, 252.33000, 1778.41003, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19388, 249.64999, 1777.30005, 701.65002,   0.00000, 0.00000, -45.00000, 40, 40);
	CreateDynamicObject(19388, 246.66000, 1775.83997, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19466, 252.38000, 1778.39001, 702.50787,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(1502, 249.13000, 1776.76001, 699.95001,   0.00000, 0.00000, 45.00000, 40, 40);
	CreateDynamicObject(2165, 251.81000, 1777.84998, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19358, 248.53999, 1774.62000, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1714, 252.63000, 1777.00000, 700.09003,   0.00000, 0.00000, 230.00000, 40, 40);
	CreateDynamicObject(2007, 253.70000, 1776.69995, 700.01001,   0.00000, 0.00000, -90.00000, 40, 40);
	CreateDynamicObject(1961, 250.82001, 1775.96997, 701.85999,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1962, 251.55000, 1775.96997, 701.85999,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1960, 252.27000, 1775.96997, 701.85999,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1569, 247.05000, 1784.39001, 700.02002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1569, 250.03000, 1784.39001, 700.02002,   0.00000, 0.00000, 180.00000, 40, 40);
	CreateDynamicObject(1703, 251.10001, 1783.83997, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1703, 246.23000, 1779.16003, 700.09003,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(2315, 247.52000, 1779.45996, 700.09003,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(2315, 251.39000, 1782.50000, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2250, 251.42000, 1782.51001, 701.03003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2250, 247.52000, 1780.31006, 701.03003,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(2852, 252.61000, 1782.48999, 700.58002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(2894, 247.42000, 1779.67004, 700.58002,   0.00000, 0.00000, 39.00000, 40, 40);
	CreateDynamicObject(2011, 246.21001, 1783.96997, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2011, 253.24001, 1779.06995, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19450, 245.63000, 1770.30005, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19358, 250.13000, 1773.12000, 701.65002,   0.00000, 0.00000, 90.40000, 40, 40);
	CreateDynamicObject(19388, 252.80000, 1774.22998, 701.65002,   0.00000, 0.00000, -45.00000, 40, 40);
	CreateDynamicObject(1502, 252.28999, 1773.68994, 699.95001,   0.00000, 0.00000, 45.00000, 40, 40);
	CreateDynamicObject(1778, 253.53000, 1775.81006, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2712, 253.57001, 1775.31995, 700.67999,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19450, 249.17999, 1768.97998, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(1705, 246.30000, 1770.17004, 700.09003,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(1705, 247.85001, 1769.63000, 700.09003,   0.00000, 0.00000, 180.00000, 40, 40);
	CreateDynamicObject(1705, 251.83000, 1769.63000, 700.09003,   0.00000, 0.00000, 180.00000, 40, 40);
	CreateDynamicObject(2315, 248.60001, 1769.55005, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2855, 248.78000, 1769.55005, 700.58002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2251, 249.67000, 1769.35999, 701.40997,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1667, 249.91000, 1769.75000, 700.69000,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1667, 250.08000, 1769.65002, 700.69000,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2817, 248.02000, 1783.18005, 700.08002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19450, 254.81000, 1780.65002, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(14393, 255.23000, 1759.94995, 702.32001,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19450, 261.73001, 1768.97998, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19450, 249.19000, 1768.82996, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19388, 255.31000, 1768.97803, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19388, 255.31000, 1768.82996, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19450, 261.73001, 1768.82996, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(14391, 256.13000, 1760.85999, 701.04999,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(1705, 257.10999, 1767.64001, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1705, 258.67999, 1767.02002, 700.09003,   0.00000, 0.00000, -90.00000, 40, 40);
	CreateDynamicObject(2332, 259.63000, 1764.35999, 700.38000,   0.00000, 0.00000, -90.00000, 40, 40);
	CreateDynamicObject(638, 254.72000, 1765.19995, 701.42999,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(638, 258.07001, 1765.19995, 701.42999,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(2894, 256.39999, 1765.18005, 701.09998,   0.00000, 0.00000, 80.00000, 40, 40);
	CreateDynamicObject(1714, 257.10999, 1762.81006, 700.09998,   0.00000, 0.00000, -45.00000, 40, 40);
	CreateDynamicObject(1714, 254.17999, 1762.77002, 700.09998,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1502, 251.39999, 1759.68005, 699.95001,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2395, 250.95000, 1759.81995, 700.09998,   0.00000, 0.00000, 180.00000, 40, 40);
	CreateDynamicObject(2395, 252.48000, 1759.81897, 702.46002,   0.00000, 0.00000, 180.00000, 40, 40);
	CreateDynamicObject(2395, 249.78999, 1759.58997, 702.46002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2395, 248.19000, 1759.57996, 700.09998,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1704, 254.31000, 1753.90002, 700.09003,   0.00000, 0.00000, 135.00000, 40, 40);
	CreateDynamicObject(1704, 256.22000, 1754.48999, 700.09003,   0.00000, 0.00000, -135.00000, 40, 40);
	CreateDynamicObject(1815, 254.42000, 1754.72998, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2247, 254.89000, 1755.31995, 700.98999,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2010, 253.33000, 1754.94995, 700.09998,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2010, 256.59000, 1754.91003, 700.09998,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19466, 253.95000, 1759.94995, 701.91998,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19466, 256.17001, 1759.94995, 701.91998,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19466, 258.39999, 1759.94995, 701.91998,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(1502, 254.53000, 1768.95996, 699.95001,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19450, 262.60999, 1772.18005, 701.65002,   0.00000, 0.00000, -45.00000, 40, 40);
	CreateDynamicObject(19450, 263.67001, 1770.76001, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19450, 257.75000, 1783.81995, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19388, 257.75000, 1777.43005, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19388, 259.37000, 1782.07996, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19388, 265.76001, 1782.07996, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19450, 268.39999, 1775.63000, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19358, 256.17001, 1781.31006, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19450, 262.09000, 1787.44995, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19450, 269.72000, 1784.41003, 701.65002,   0.00000, 0.00000, 45.00000, 40, 40);
	CreateDynamicObject(19450, 269.60999, 1780.35999, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19450, 272.14999, 1782.07996, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19358, 262.57001, 1782.07996, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19450, 262.67999, 1786.88000, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1569, 262.47598, 1772.09424, 700.02002,   0.00000, 0.00000, 224.81992, 40, 40);
	CreateDynamicObject(1569, 260.37656, 1769.99683, 700.02002,   0.00000, 0.00000, 405.05997, 40, 40);
	CreateDynamicObject(2817, 260.85318, 1770.91943, 700.08002,   0.00000, 0.00000, 44.88000, 40, 40);
	CreateDynamicObject(1502, 258.59000, 1782.06006, 699.95001,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1502, 264.98001, 1782.06006, 699.95001,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2207, 265.48999, 1785.14001, 700.09003,   0.00000, 0.00000, -45.00000, 40, 40);
	CreateDynamicObject(1714, 267.29001, 1785.67004, 700.09998,   0.00000, 0.00000, -45.00000, 40, 40);
	CreateDynamicObject(330, 266.98001, 1784.23999, 700.85999,   90.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(2894, 265.87000, 1785.32996, 700.85999,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2608, 263.00000, 1785.06995, 701.21002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(1962, 267.85001, 1786.13000, 701.85999,   0.00000, 0.00000, -45.00000, 40, 40);
	CreateDynamicObject(2185, 258.67001, 1785.34998, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1714, 260.03000, 1786.59998, 700.09998,   0.00000, 0.00000, -45.00000, 40, 40);
	CreateDynamicObject(1704, 260.01999, 1783.92004, 700.09003,   0.00000, 0.00000, 180.00000, 40, 40);
	CreateDynamicObject(2078, 262.38000, 1784.88000, 700.10999,   0.00000, 0.00000, -90.00000, 40, 40);
	CreateDynamicObject(2007, 257.95001, 1786.73999, 700.01001,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(2886, 257.82001, 1778.51001, 701.44000,   0.00000, 0.00000, -90.00000, 40, 40);
	CreateDynamicObject(14782, 255.35538, 1780.49646, 701.05066,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(2007, 256.71194, 1781.03699, 700.01001,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(14805, 265.88492, 1778.80530, 700.91333,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2239, 257.76993, 1756.57715, 700.06451,   0.00000, 0.00000, -79.74001, 40, 40);
	CreateDynamicObject(3031, 251.82787, 1756.62805, 701.60242,   0.00000, 0.00000, -43.13999, 40, 40);
	CreateDynamicObject(1502, 257.76245, 1776.68018, 699.95001,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(2885, 249.79918, 1785.64258, 703.59308,   270.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2885, 249.79919, 1778.93506, 703.59308,   270.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2885, 260.72601, 1785.64258, 703.59308,   270.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2885, 260.72601, 1778.93506, 703.59308,   270.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2885, 260.72601, 1792.35095, 703.59308,   270.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2885, 271.65250, 1792.35095, 703.59308,   270.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2885, 271.65250, 1785.64258, 703.59308,   270.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2885, 271.65250, 1778.93506, 703.59308,   270.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2885, 249.79919, 1775.55994, 703.58313,   270.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2885, 260.72601, 1775.55994, 703.58313,   270.00000, 0.00000, 0.00000, 40, 40);

	//PEAJE FARO / 20 objetos / EdinsonWalker
	CreateDynamicObjectEx(10829, 53.41850, -1530.79065, 3.97333,   0.00000, 0.00000, 261.04572, 1000.0, 1000.0);
	CreateDynamicObject(1250, 49.49018, -1535.80005, 5.10076,   0.00000, 0.00000, -7.81222, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, 56.90186, -1528.36621, 4.94126,   0.00000, 0.00000, -189.53111, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, 52.45057, -1536.86682, 4.13188,   0.00000, 0.00000, 82.18770, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, 53.85027, -1527.02954, 4.04501,   0.00000, 0.00000, -97.81226, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 52.71272, -1535.98633, 4.11685,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 53.69006, -1527.92981, 4.05946,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 58.59167, -1530.10193, 4.71667,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 57.84173, -1534.95386, 4.71670,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 47.81287, -1533.60645, 4.71670,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 48.62530, -1528.29102, 4.71670,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObjectEx(3512, -31.77147, -1532.05139, 0.83861,   0.00000, 0.00000, 22.43999, 1000.0, 1000.0);
	CreateDynamicObjectEx(3512, -32.99367, -1539.65601, 0.97799,   0.00000, 0.00000, 27.71999, 1000.0, 1000.0);
	CreateDynamicObjectEx(3512, -34.67544, -1547.77808, 1.00891,   0.00000, 0.00000, 13.37999, 1000.0, 1000.0);
	CreateDynamicObjectEx(3512, -37.23591, -1555.47302, 0.94904,   0.00000, 0.00000, 25.31999, 1000.0, 1000.0);
	CreateDynamicObject(3463, 19.00132, -1525.51685, 3.66477,   0.00000, 0.00000, 75.36000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3506, 82.73570, -1516.94031, 3.16382,   0.00000, 0.00000, -53.04000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 58.38877, -1532.57568, 4.60351,   0.00000, 0.00000, -9.84000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19859, 48.69372, -1530.42456, 5.54386,   0.00000, 0.00000, -99.12000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3506, 75.94035, -1516.54309, 3.09753,   0.00000, 0.00000, -33.00000, -1, -1, -1, MAX_RADIO_STREAM);

	//PEAJE TUNEL LS-SF / 30 objetos
	CreateDynamicObject(3881, 21.72519, -1337.69922, 10.88440,   0.00000, 0.00000, 127.99625, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1229, 0.81767, -1350.52271, 11.18264,   0.00000, 358.00000, 326.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1229, 29.80743, -1305.74756, 13.68069,   0.00000, 0.00000, 137.99820, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, 5.81366, -1318.08228, 10.49156,   0.00000, 0.00000, 308.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3881, 8.09473, -1319.53223, 12.37458,   2.00000, 0.00000, 307.99072, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, 24.05878, -1339.37561, 9.07829,   0.00000, 0.00000, 127.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 1.18159, -1312.32751, 10.62508,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 0.63789, -1311.67041, 10.62234,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 7.86221, -1323.77417, 10.51996,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 8.97134, -1325.14514, 10.52443,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 8.45340, -1324.41553, 10.52545,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 12.86280, -1319.79944, 10.89280,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 13.34145, -1320.44385, 10.89289,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 13.87595, -1321.09351, 10.89543,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 21.99424, -1333.28455, 9.29620,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 21.46582, -1332.65137, 9.28580,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 20.92460, -1331.98987, 9.28337,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 16.80042, -1337.38452, 9.15949,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 16.25214, -1336.75439, 9.15717,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 15.76797, -1336.13464, 9.15406,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 4.68705, -1321.06555, 11.05175,   0.00000, 0.00000, 37.99719, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 25.09694, -1336.22107, 9.85766,   0.00000, 0.00000, 38.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(646, 12.97048, -1318.74170, 12.17962,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(646, 10.35747, -1315.08643, 12.21519,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(646, 11.63741, -1316.77881, 12.20033,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(646, 19.14176, -1341.82019, 10.48168,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(646, 16.42441, -1338.38184, 10.57723,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(646, 17.67007, -1339.98157, 10.53705,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 28.55083, -1345.26758, 9.21661,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 29.10443, -1346.00391, 9.21805,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);

	//PEAJE SAN FIERRO / 70 objetos
	CreateDynamicObject(3512, -1807.28894, -565.04437, 14.77296,   2.50000, 0.10000, 142.60004, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1796.27014, -564.77509, 15.13594,   0.00000, 0.00000, 185.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1786.09778, -564.94495, 15.33595,   0.00000, 0.00000, -179.89001, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1776.34131, -564.97620, 15.02593,   -0.10000, 0.00000, -180.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1806.99182, -595.13611, 15.33384,   -0.10000, 0.00000, -355.80005, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1776.37415, -595.05597, 15.01434,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1796.06421, -595.14075, 15.26634,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1786.32385, -595.14301, 15.28916,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1829.22205, -595.23572, 15.48593,   0.10000, 0.00000, -0.20000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1841.36609, -595.35315, 18.13447,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1853.16748, -595.19836, 20.32037,   0.00000, 0.00000, 20.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1866.77417, -595.18304, 22.79581,   0.00000, 0.00000, 10.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1829.53381, -564.71716, 15.45033,   0.00000, 0.00000, -169.99001, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1842.35791, -564.78455, 18.03795,   0.00000, 0.00000, -170.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1866.21069, -564.68115, 22.78217,   0.02000, -0.01000, -170.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1853.80737, -564.63226, 20.86625,   0.00000, 0.01000, -180.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1808.15149, -554.08661, 14.98843,   0.00000, 0.00000, 70.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1828.74023, -607.13513, 15.48512,   0.00000, 0.00000, -97.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1830.29980, -554.08624, 14.86344,   0.00000, 0.00000, -60.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1828.46582, -618.33319, 15.63772,   0.00000, 0.00000, -101.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1809.50818, -544.48621, 14.62305,   0.00000, 0.00000, 90.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1831.61816, -544.48627, 14.66895,   0.00000, 0.00000, -70.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1828.10400, -628.93823, 15.81036,   0.00000, 0.00000, -80.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1806.99182, -607.13513, 15.43071,   0.00000, 0.00000, 100.04001, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1806.99109, -617.81232, 15.49591,   0.00000, 0.00000, 100.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1806.99121, -628.93878, 15.87094,   -1.00000, -0.30000, 79.70000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(13640, -1751.60559, -705.45966, 26.23971,   -1.06000, -9.02998, -63.38986, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(13640, -1756.96765, -708.12244, 26.37599,   -1.50000, -8.73000, -64.80993, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1752.83569, -674.30389, 25.93010,   -3.60000, 0.00000, 4.10000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1769.77234, -675.06592, 26.07275,   3.00000, -0.20000, 183.49997, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1769.03577, -686.23962, 27.71890,   0.50002, 1.00000, -171.62012, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1752.29053, -683.76886, 27.31394,   0.00000, 0.00000, 9.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1750.54602, -692.53009, 28.92773,   -2.00000, -1.00000, 19.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1766.33289, -698.61810, 29.58667,   2.90000, 0.00000, 200.89999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1747.96790, -702.53748, 31.21056,   -4.00000, 0.00000, 26.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1762.45532, -709.41870, 31.46432,   4.50000, -0.30000, -153.09004, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, -1759.82239, -658.51697, 19.70070,   3.10000, 2.10000, -182.10001, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, -1761.51807, -658.62567, 19.53358,   -8.60000, 2.00000, -0.90000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, -1759.56470, -658.34949, 20.46464,   -1.00000, 4.40000, 86.09998, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, -1762.31348, -658.65198, 20.46246,   -2.10000, -7.40000, -97.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1278, -1761.16052, -661.16919, 10.15295,   -2.12000, 0.02000, -2.89002, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(689, -1782.07947, -668.09802, 22.25261,   4.80000, -2.00000, -189.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(683, -1787.41028, -648.30334, 19.92405,   0.51000, 1.60000, -435.80005, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1731.93738, -750.67255, 36.58495,   -0.60000, 0.60000, 4.10000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1761.27673, -709.35785, 29.06569,   174.89928, 893.90137, -286.69788, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(690, -1790.69336, -682.89929, 19.72446,   0.20000, 0.00000, 27.19995, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(9623, -1760.56677, -658.93140, 22.54554,   -7.27000, -0.32000, -361.54019, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(683, -1795.81921, -655.49084, 20.39215,   0.00000, 0.00000, 90.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(690, -1778.96423, -639.42059, 17.29495,   0.00000, 0.00000, 625.08014, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1747.40833, -703.27899, 28.93547,   -187.17000, -186.38000, -286.75012, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1751.46606, -689.69318, 26.33061,   -9.45599, 6.59599, 61.90012, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1765.75269, -696.39240, 26.96770,   6.60000, -6.50000, -114.29996, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1768.56433, -682.44482, 24.69252,   -7.79999, 4.90000, 58.39995, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1752.64575, -676.15088, 23.87668,   -9.00000, 4.90000, -309.50003, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1360, -1770.01428, -674.62555, 22.86488,   -7.90000, 4.10000, 3.61000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1361, -1769.98450, -672.34088, 22.54162,   3.58992, -8.59997, -145.70001, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1360, -1769.86536, -670.02307, 22.19852,   -7.50000, 4.00000, -362.79922, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(983, -1752.28271, -666.51794, 21.66621,   367.99960, 3.79944, 175.14929, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(983, -1769.71936, -665.44958, 21.59806,   -6.70000, -1.00000, -2.48990, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1755.42090, -605.39191, 19.38437,   0.00000, 0.00000, -361.39990, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1768.17200, -604.60590, 19.25299,   0.40000, -1.40001, -183.06990, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1754.19678, -618.60693, 20.02140,   -0.50000, 0.00000, -1.79987, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1768.31152, -618.62640, 19.85536,   0.22000, -1.30000, 180.40999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1767.96948, -630.60504, 20.96777,   179.11986, 178.99991, -0.09000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1753.81897, -630.64557, 20.83613,   0.00000, 0.00000, 1.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1753.86426, -645.16449, 22.18841,   0.00000, -1.00000, -2.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1767.69922, -643.65625, 22.06291,   0.00000, 0.00000, 175.10001, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1425, -1760.71765, -648.31873, 18.79329,   1.50000, 0.10000, 178.59985, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1425, -1761.39783, -669.67828, 21.58807,   -6.85000, 0.40000, -2.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1278, -1761.16052, -661.16919, 10.15295,   -2.12000, 0.02000, -2.89002, -1, -1, -1, MAX_RADIO_STREAM);

	// OTROS PAISAJES LS - SF | by Un Player | 21 Objetos
	CreateDynamicObject(624, -157.10893200, -1416.48730500, 1.40354700, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(624, -160.80497700, -1393.60376000, 1.40354700, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(624, -162.71316500, -1370.66857900, 1.40354700, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(624, -161.72607400, -1346.89636200, 1.40354700, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(624, -160.08486900, -1323.20019500, 1.40354700, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(624, -157.84442100, -1299.03161600, 1.40354700, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(7595, -126.32838400, -1222.41723600, 3.71471100, 0, 0, -14.76506508, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(7595, -137.60986300, -1415.79858400, 3.71471100, 0, 0, 15.54715248, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(7595, -114.72329700, -1463.70532200, 3.71471100, 0, 0, 36.32833170, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(694, -120.85666700, -1502.96057100, 8.50689300, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(694, -106.24447600, -1345.55786100, 7.58680700, 0, 0, -101.25000758, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(694, -54.91997100, -1088.66503900, 10.02390700, 0, 0, -101.25000758, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(694, -146.34655800, -1139.85803200, 7.56457900, 0, 0, -101.25000758, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(16777, -312.20611600, -879.20336900, 46.19380600, 0, 0, -22.49999532, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(647, -321.80581700, -879.71093800, 49.40503300, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(647, -324.20513900, -878.81939700, 49.01303100, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(647, -332.60559100, -875.14221200, 49.29985000, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(647, -335.84845000, -874.01001000, 49.39725500, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -318.56030300, -878.86377000, 47.40609000, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -337.35534700, -870.91387900, 47.22341900, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(694, -131.24736000, -951.70269800, 27.37740700, 0, 0, -112.49997660, -1, -1, -1, MAX_RADIO_STREAM);

	//PEAJE LS-LV / 24 objetos / EdinsonWalker
	CreateDynamicObjectEx(966, 1632.25537, 9.07947, 35.70000,   0.00000, 0.00000, 204.99939, 1000.0, 1000.0);
	CreateDynamicObjectEx(966, 1629.48706, -5.36000, 35.70000,   0.00000, 0.00000, 24.99939, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, 1616.91418, 35.96387, 36.00000,   0.00000, 0.00000, 22.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, 1649.62537, -41.13966, 35.73855,   0.00000, 0.00000, 21.99463, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, 1615.00000, 120.10000, 35.90000,   0.00000, 0.00000, 347.99463, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, 1634.90002, 205.60001, 30.70000,   0.00000, 0.00000, 347.99194, 1000.0, 1000.0);
	CreateDynamicObjectEx(7522, 1630.94373, 1.84988, 40.05271,   0.00000, 0.00000, 23.58000, 1000.0, 1000.0);
	CreateDynamicObject(1237, 1630.53210, 8.39224, 35.65030,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 1631.51025, 8.83338, 35.65030,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 1631.30273, -4.65554, 35.65030,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 1630.29163, -5.04152, 35.65030,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1629.38037, 5.47883, 36.37953,   0.00000, 0.00000, 113.28000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1632.56482, -1.80627, 36.37953,   0.00000, 0.00000, 113.28000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1631.61011, -3.67795, 36.22434,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1634.49597, -2.42500, 36.22434,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1627.35950, 6.11797, 36.22434,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1630.24707, 7.37902, 36.22434,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 1626.00806, 90.51128, 37.11422,   0.00000, 0.00000, 92.46001, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 1625.35730, 99.89941, 36.98363,   0.00000, 0.00000, 95.99996, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 1597.48157, 105.07399, 37.29366,   0.00000, 0.00000, -111.96004, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 1593.60339, 96.42356, 37.48183,   0.00000, 0.00000, -117.83998, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3508, 1592.79626, 90.99478, 36.65805,   0.00000, 0.00000, 49.08000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3508, 1591.28894, 74.50330, 36.55390,   0.00000, 0.00000, 94.62000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3508, 1593.65381, 56.13440, 36.28920,   0.00000, 0.00000, 66.12000, -1, -1, -1, MAX_RADIO_STREAM);

	//PEAJE SF-PUEBLOS / 18 objetos / EdinsonWalker
	CreateDynamicObjectEx(10829, -2681.59033, 1313.43054, 54.37108,   0.00000, 0.00000, 89.39999, 1000.0, 1000.0);
	CreateDynamicObject(1237, -2676.15796, 1317.10803, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2675.09619, 1317.10364, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2674.05444, 1317.05835, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, -2673.10034, 1317.03174, 54.40920,   0.00000, 0.00000, 180.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2665.45996, 1317.03931, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, -2689.82397, 1312.35840, 54.40920,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2686.89819, 1312.23828, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2687.88818, 1312.28101, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2688.94165, 1312.32813, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2697.65186, 1312.38110, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, -2699.21216, 1312.80359, 55.71997,   0.00000, 0.00000, 141.18004, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, -2663.65381, 1316.90405, 55.79161,   0.00000, 0.00000, 320.69995, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -2686.25391, 1318.19739, 54.94259,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -2676.91016, 1318.08789, 54.94259,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -2676.96948, 1310.87915, 54.94259,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -2686.28906, 1310.99133, 54.94259,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2684.16406, 1310.87561, 54.93444,   0.00000, 0.00000, -90.90000, -1, -1, -1, MAX_RADIO_STREAM);

	//PEAJE FORT CARSON / 29 objetos / EdinsonWalker
	CreateDynamicObjectEx(10829, -494.15784, 590.95331, 15.83818,   0.00000, 0.00000, 70.49998, 1000.0, 1000.0);
	CreateDynamicObject(1360, -487.94073, 592.33453, 16.64247,   0.00000, 0.00000, -20.21999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1360, -499.21414, 592.72009, 16.76111,   0.00000, 0.00000, -20.21999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1361, -498.49997, 595.02454, 16.75411,   0.00000, 0.00000, -20.22000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObjectEx(966, -496.17609, 597.59796, 15.69929,   0.00000, 0.00000, -107.51999, 1000.0, 1000.0);
	CreateDynamicObject(1237, -493.84543, 604.73712, 15.65180,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -493.51920, 605.58582, 15.65180,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -493.19504, 606.47931, 15.65180,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, -495.58701, 597.08405, 16.71836,   0.00000, 0.00000, 133.56009, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObjectEx(966, -491.96948, 586.18542, 15.69929,   0.00000, 0.00000, 68.82001, 1000.0, 1000.0);
	CreateDynamicObject(1237, -494.58945, 579.19574, 15.65180,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -495.23993, 577.57758, 15.65180,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -494.95584, 578.38971, 15.65180,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, -492.26340, 586.89551, 16.71836,   0.00000, 0.00000, 286.14005, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObjectEx(3512, -483.21484, 588.29370, 15.67256,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(3512, -476.90317, 585.86389, 15.67256,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(3512, -471.05170, 583.48816, 15.67256,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObject(870, -476.87411, 585.90314, 16.26664,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(869, -470.94504, 583.86298, 16.50610,   0.00000, 0.00000, 83.03999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(869, -482.91220, 588.18213, 16.50610,   0.00000, 0.00000, 88.86000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3521, -466.04016, 582.47876, 17.47508,   0.00000, 0.00000, 106.19999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -488.04901, 593.69055, 19.63258,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -497.18481, 596.95874, 19.63258,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -499.59946, 590.28625, 19.63258,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -490.39825, 587.03046, 19.63258,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObjectEx(3463, -530.42249, 607.13184, 16.19658,   0.00000, 0.00000, 68.99999, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, -582.35425, 631.43939, 16.19658,   0.00000, 0.00000, 68.99999, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, -628.02094, 651.71002, 16.19658,   0.00000, 0.00000, 68.99999, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, -695.20715, 680.91571, 16.19658,   0.00000, 0.00000, 68.99999, 1000.0, 1000.0);

	//PEAJE LV-LS / 121 objetos
	CreateDynamicObjectEx(9623, 2895.10010, -685.29999, 12.60000,   0.00000, 0.00000, 359.49500, 1000.0, 1000.0);
	CreateDynamicObjectEx(9623, 2877.30005, -649.59998, 12.60000,   0.00000, 0.00000, 359.50000, 1000.0, 1000.0);
	CreateDynamicObjectEx(966, 2875.80005, -654.79999, 9.77710,   0.00000, 0.00000, 358.48401, 1000.0, 1000.0);
	CreateDynamicObjectEx(966, 2877.60010, -654.79999, 9.77709,   0.00000, 0.00000, 179.97800, 1000.0, 1000.0);
	CreateDynamicObjectEx(966, 2894.19995, -680.00000, 9.8299,   0.00000, 0.00000, 358.97800, 1000.0, 1000.0);
	CreateDynamicObjectEx(966, 2895.50000, -680.09998, 9.8299,   0.00000, 0.00000, 179.47800, 1000.0, 1000.0);
	CreateDynamicObject(973, 2909.39990, -800.29999, 10.70000,   0.00000, 0.00000, 179.74699, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2914.80005, -800.29999, 10.70000,   0.00000, 0.00000, 180.25000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2904.60010, -795.79999, 10.70000,   0.00000, 0.00000, 90.74200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2904.50000, -786.50000, 10.70000,   0.00000, 0.00000, 90.49200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2904.50000, -777.20001, 10.70000,   0.00000, 0.00000, 89.48900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2904.69995, -758.59998, 10.70000,   0.00000, 0.00000, 89.23400, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2904.60010, -767.90002, 10.70000,   0.00000, 0.00000, 89.48400, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2904.80005, -749.29999, 10.70000,   0.00000, 0.00000, 89.48100, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2904.89990, -740.29999, 10.70000,   0.00000, 0.00000, 89.22800, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2905.10010, -731.29999, 10.70000,   0.00000, 0.00000, 88.16500, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2905.39941, -722.00000, 10.70000,   0.00000, 0.00000, 88.21500, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2905.60010, -712.70001, 10.70000,   0.00000, 0.00000, 89.22000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2905.69922, -703.39941, 10.70000,   0.00000, 0.00000, 89.46700, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2902.69995, -697.70001, 10.70000,   0.00000, 0.00000, 89.21400, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(979, 2904.10010, -706.79999, 10.70000,   0.00000, 0.00000, 108.24900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2905.79980, -694.09961, 10.70000,   0.00000, 0.00000, 89.21400, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2905.89990, -684.79999, 10.70000,   0.00000, 0.00000, 89.71400, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 2895.00000, -699.79999, 10.70000,   0.00000, 0.00000, 263.99100, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(979, 2894.00000, -699.59998, 10.60000,   0.00000, 0.00000, 95.99900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 2894.50000, -704.50000, 9.90000,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 2885.19995, -706.09998, 10.60000,   0.00000, 0.00000, 97.24600, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 2886.39990, -706.20001, 10.60000,   0.00000, 0.00000, 263.23999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 2885.80005, -711.00000, 9.90000,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2887.00000, -696.90002, 10.60000,   0.00000, 0.00000, 269.24200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2884.60010, -696.90002, 10.60000,   0.00000, 0.00000, 89.46700, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1352, 2903.00000, -675.40002, 9.90000,   0.00000, 0.00000, 343.98199, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2903.00000, -673.40002, 10.70000,   0.00000, 0.00000, 89.21400, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2906.00000, -675.50000, 10.70000,   0.00000, 0.00000, 88.96200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(979, 2904.69995, -664.40002, 10.70000,   0.00000, 0.00000, 69.24900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2906.19922, -666.29980, 10.70000,   0.00000, 0.00000, 88.20900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2906.39990, -657.00000, 10.70000,   0.00000, 0.00000, 89.20900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2906.60010, -647.70001, 10.70000,   0.00000, 0.00000, 88.20900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2906.69995, -638.59998, 10.70000,   0.00000, 0.00000, 90.70400, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2906.69995, -629.29999, 10.70000,   0.00000, 0.00000, 89.20300, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2906.69995, -610.90002, 10.70000,   0.00000, 0.00000, 93.94500, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2906.10010, -601.90002, 10.80000,   0.00000, 359.00000, 93.44400, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2905.60010, -592.59998, 11.00000,   0.00000, 358.74500, 93.43900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2906.89990, -620.00000, 10.70000,   0.00000, 0.00000, 88.44800, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2905.19995, -583.40002, 10.50000,   0.00000, 7.49200, 91.43900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2885.19995, -634.79999, 10.60000,   0.00000, 0.00000, 89.48900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2887.50000, -634.79999, 10.60000,   0.00000, 0.00000, 269.24200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 2886.89990, -625.50000, 10.60000,   0.00000, 0.00000, 277.74500, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 2885.80005, -625.50000, 10.60000,   0.00000, 0.00000, 83.18100, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(979, 2877.50000, -634.70001, 10.50000,   0.00000, 0.00000, 275.99399, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 2876.39990, -634.70001, 10.60000,   0.00000, 0.00000, 82.49600, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 2877.00000, -629.79999, 9.80000,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 2886.39990, -620.70001, 9.90000,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(979, 2868.39990, -628.29999, 10.50000,   0.00000, 0.00000, 284.74799, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2867.10010, -627.00000, 10.50000,   357.48401, 359.97900, 267.95300, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2866.89990, -636.09998, 10.50000,   357.47900, 359.97800, 269.45099, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2869.50000, -637.40002, 10.50000,   357.46799, 359.97299, 269.19299, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2866.80005, -645.40002, 10.60000,   357.47400, 358.72699, 269.39600, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2867.19995, -617.70001, 10.60000,   357.48401, 1.23000, 271.26300, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2866.80005, -608.50000, 10.80000,   357.48401, 1.23000, 273.76801, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2866.10010, -599.50000, 11.00000,   357.48401, 1.23000, 275.26999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2865.00000, -590.29999, 11.20000,   357.48801, 1.23200, 278.52301, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2863.60010, -581.29999, 11.50000,   357.48999, 2.48600, 279.32901, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2825.50000, -498.10001, 17.40000,   0.00000, 4.24700, 303.99701, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2830.69995, -505.79999, 16.70000,   0.00000, 4.24600, 303.99200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2835.89990, -513.50000, 16.00000,   0.00000, 4.24600, 303.99200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2844.80005, -529.40002, 14.80000,   359.75101, 4.24100, 295.50900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2848.80005, -537.50000, 14.10000,   359.74701, 4.74100, 297.00699, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2852.60010, -545.90002, 13.50000,   359.74701, 2.74100, 291.74600, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2859.00000, -563.29999, 12.40000,   357.49701, 3.98900, 289.39899, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2861.69995, -572.20001, 11.90000,   357.49100, 2.23600, 284.57001, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2855.89990, -554.59998, 13.00000,   357.49600, 3.48900, 290.13199, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2840.69995, -521.40002, 15.40000,   0.00000, 3.24600, 298.74200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2884.80005, -667.50000, 10.60000,   0.00000, 0.00000, 89.23900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2884.80005, -676.79999, 10.60000,   0.00000, 0.00000, 90.73600, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2887.30005, -667.50000, 10.60000,   0.00000, 0.00000, 269.24500, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2887.10010, -676.70001, 10.60000,   0.00000, 0.00000, 268.49200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1352, 2893.60010, -675.29999, 9.90000,   0.00000, 0.00000, 343.97601, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(979, 2894.00000, -670.70001, 10.60000,   0.00000, 0.00000, 83.25000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 2895.30005, -670.70001, 10.60000,   0.00000, 0.00000, 277.74600, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 2894.60010, -666.09998, 9.90000,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2887.39990, -658.29999, 10.60000,   0.00000, 0.00000, 269.50000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2884.89990, -658.20001, 10.60000,   0.00000, 0.00000, 89.49200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1352, 2877.69995, -659.00000, 9.90000,   0.00000, 0.00000, 161.97099, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 2876.00000, -663.90002, 10.60000,   0.00000, 0.00000, 95.75000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(979, 2877.19995, -663.90002, 10.60000,   0.00000, 0.00000, 261.24899, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 2876.39990, -668.70001, 9.90000,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2869.19995, -661.59998, 10.70000,   357.46799, 359.97299, 269.69299, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1352, 2869.19995, -659.09998, 9.90000,   0.00000, 0.00000, 161.97600, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2866.59961, -663.89941, 10.70000,   357.46799, 359.97299, 269.19299, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2866.69995, -654.59998, 10.70000,   357.47299, 359.97400, 269.44501, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2866.39941, -673.19922, 10.70000,   357.45700, 359.96201, 268.44000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(979, 2867.80005, -670.70001, 10.70000,   0.00000, 0.25000, 252.74699, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2866.19995, -682.50000, 10.70000,   357.46201, 359.96701, 269.19000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2866.00000, -691.79999, 10.70000,   357.46201, 359.96701, 268.43701, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2865.80005, -701.09998, 10.70000,   357.46201, 359.96701, 269.18399, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2865.60010, -710.40002, 10.70000,   357.46201, 359.96701, 268.43201, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2865.39990, -719.70001, 10.70000,   357.46201, 359.96701, 269.17899, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2865.30005, -728.90002, 10.70000,   357.46201, 359.96701, 269.67599, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2865.10010, -738.20001, 10.70000,   357.46201, 359.96701, 267.92599, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.80005, -747.50000, 10.70000,   357.46201, 359.96701, 268.42401, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.69995, -756.79999, 10.70000,   357.46201, 359.96701, 270.42401, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.69995, -766.00000, 10.70000,   357.46201, 359.96701, 269.67300, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.69995, -775.29999, 10.70000,   357.46201, 359.96701, 270.42001, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.69995, -784.40002, 10.70000,   357.46201, 359.96701, 269.66699, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2861.69995, -922.90002, 14.00000,   357.46301, 353.70200, 266.84100, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2861.39990, -932.20001, 15.00000,   357.45999, 354.20001, 268.61301, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2862.60010, -904.40002, 12.00000,   357.47299, 353.70599, 268.35199, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2862.19995, -913.70001, 13.00000,   357.46600, 353.95499, 266.35800, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2862.89990, -895.20001, 11.10000,   357.47198, 354.96201, 267.41101, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2863.69995, -877.29999, 10.70000,   357.46201, 359.96701, 267.13501, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2863.30005, -886.00000, 10.70000,   357.46201, 359.96701, 267.63300, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.39990, -858.70001, 10.70000,   357.46201, 359.96701, 268.39301, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.10010, -868.00000, 10.70000,   357.46201, 359.96701, 267.89099, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.60010, -849.40002, 10.70000,   357.46201, 359.96701, 269.14499, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.60010, -840.09998, 10.70000,   357.46201, 359.96701, 270.89499, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.50000, -830.79999, 10.70000,   357.46201, 359.96701, 270.40100, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.39990, -821.50000, 10.70000,   357.46201, 359.96701, 270.90399, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.39990, -812.20001, 10.70000,   357.46201, 359.96701, 269.15900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.50000, -802.90002, 10.70000,   357.46201, 359.96701, 269.66000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.60010, -793.59998, 10.70000,   357.46201, 359.96701, 269.16501, -1, -1, -1, MAX_RADIO_STREAM);
	// Estación de trenes market 45 Objs
	CreateDynamicObject(970, 850.40, -1392.67, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 845.85, -1388.55, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 841.92, -1384.99, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 836.89, -1380.43, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 832.98, -1376.85, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 827.97, -1372.22, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 824.12, -1368.70, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 810.35, -1355.69, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 806.60, -1352.27, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 801.66, -1347.68, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 797.81, -1344.15, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 792.84, -1339.48, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 788.95, -1335.98, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 784.07, -1331.50, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 825.40002, -1337.38000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 821.20001, -1337.38000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 809.59998, -1337.38000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 813.79999, -1337.38000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 807.47998, -1339.50000, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 807.47998, -1343.69995, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 807.47998, -1354.69995, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 807.47998, -1350.50000, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 809.54999, -1356.91003, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1256, 827.00000, -1346.59998, 13.20000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1256, 812.00000, -1356.50000, 13.20000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1256, 827.09998, -1351.80005, 13.20000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1256, 817.29999, -1356.50000, 13.15000,   0.00000, 0.00000, 269.99500);
	CreateDynamicObject(1257, 835.00000, -1334.00000, 13.75000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1209, 820.09998, -1356.59998, 12.50000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1776, 821.40002, -1356.69995, 13.60000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1359, 814.59003, -1356.46997, 13.11000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1359, 827.00000, -1349.19995, 13.11000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(962, 841.20001, -1340.40002, 7.14000,   90.00000, 0.00000, 295.00000);
	CreateDynamicObject(962, 842.40002, -1343.00000, 7.14000,   90.00000, 0.00000, 294.99899);
	CreateDynamicObject(962, 827.50800, -1354.66602, 13.60000,   90.00000, 0.00000, 270.00000);
	CreateDynamicObject(962, 824.11902, -1356.88306, 13.60100,   90.00000, 0.00000, 180.00000);

	// Trabajo Granjero | Edinson Walker | 1 Objeto
	CreateDynamicObject(1522, -383.50250, -1438.09363, 25.28196, 0.00000, 0.00000, -89.88002);

	//Paso autopista | By Logan | 26 Objetos
	CreateDynamicObject(1698, 1052.56140137, -1844.63635254, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (1)
	CreateDynamicObject(1698, 1052.56054688, -1847.93579102, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (2)
	CreateDynamicObject(1698, 1052.56054688, -1851.23559570, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (3)
	CreateDynamicObject(1698, 1052.56054688, -1854.23535156, 12.48390198, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (4)
	CreateDynamicObject(1698, 1052.56054688, -1857.53540039, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (5)
	CreateDynamicObject(1698, 1053.90551758, -1844.63574219, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (6)
	CreateDynamicObject(1698, 1053.91052246, -1847.93554688, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (7)
	CreateDynamicObject(1698, 1053.90051270, -1851.23535156, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (8)
	CreateDynamicObject(1698, 1053.90051270, -1854.23535156, 12.48390198, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (9)
	CreateDynamicObject(1698, 1053.90051270, -1857.53515625, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (10)
	CreateDynamicObject(1698, 1054.90527344, -1844.63574219, 12.48190212, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (11)
	CreateDynamicObject(1698, 1054.91015625, -1847.93554688, 12.48290253, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (12)
	CreateDynamicObject(1698, 1054.90039062, -1851.23535156, 12.48690224, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (13)
	CreateDynamicObject(1698, 1054.90039062, -1854.23535156, 12.48190212, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (14)
	CreateDynamicObject(1698, 1054.90039062, -1857.53515625, 12.48490238, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (15)
	CreateDynamicObject(1283, 1055.66955566, -1854.27990723, 15.47527790, 0.00000000, 0.00000000, 270.00000000); //object(mtraffic1) (1)
	CreateDynamicObject(1215, 1052.10522461, -1859.23962402, 13.13463593, 0.00000000, 0.00000000, 0.00000000); //object(bollardlight) (1)
	CreateDynamicObject(1215, 1055.42968750, -1842.87402344, 13.13463593, 0.00000000, 0.00000000, 0.00000000); //object(bollardlight) (2)
	CreateDynamicObject(1215, 1051.96875000, -1842.81640625, 13.13820648, 0.00000000, 0.00000000, 0.00000000); //object(bollardlight) (3)
	CreateDynamicObject(1215, 1055.33630371, -1859.27746582, 13.13463593, 0.00000000, 0.00000000, 0.00000000); //object(bollardlight) (4)
	CreateDynamicObject(1215, 1053.69738770, -1859.27380371, 13.13463593, 0.00000000, 0.00000000, 0.00000000); //object(bollardlight) (5)
	CreateDynamicObject(1233, 1052.94128418, -1859.45385742, 14.12999249, 0.00000000, 0.00000000, 180.00000000); //object(noparkingsign1) (1)
	CreateDynamicObject(1214, 1055.34387207, -1851.12438965, 12.61253357, 0.00000000, 0.00000000, 0.00000000); //object(bollard) (1)
	CreateDynamicObject(1214, 1054.34375000, -1851.12402344, 12.61253357, 0.00000000, 0.00000000, 0.00000000); //object(bollard) (2)
	CreateDynamicObject(1214, 1053.34375000, -1851.12402344, 12.61253357, 0.00000000, 0.00000000, 0.00000000); //object(bollard) (3)
	CreateDynamicObject(1214, 1052.34375000, -1851.12402344, 12.61253357, 0.00000000, 0.00000000, 0.00000000); //object(bollard) (4)

	//- Aero puerto | By Edinson Walker | x objetos
	CreateDynamicObject(10757, 1962.35999, -2181.00000, 31.80000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(10838, 1961.69995, -2179.39990, 28.40000,   0.00000, 0.00000, 90.00000);
	//- Trabajo Jardinero
	CreateDynamicObject(994,1930.06762695,-1195.10400391,19.03111267,0.00000000,0.00000000,54.00000000); //object(lhouse_barrier2) (1)
	CreateDynamicObject(994,1933.77380371,-1190.03076172,19.03111267,0.00000000,0.00000000,36.24780273); //object(lhouse_barrier2) (2)
	CreateDynamicObject(994,1938.80236816,-1186.33972168,19.03111267,0.00000000,0.00000000,26.99389648); //object(lhouse_barrier2) (3)
	CreateDynamicObject(994,1944.53820801,-1183.43493652,19.03111267,0.00000000,0.00000000,18.99340820); //object(lhouse_barrier2) (4)
	CreateDynamicObject(994,1950.47802734,-1181.38256836,19.03111267,0.00000000,0.00000000,5.73986816); //object(lhouse_barrier2) (5)
	CreateDynamicObject(994,1955.08984375,-1180.83020020,19.03111267,0.00000000,0.00000000,16.73498535); //object(lhouse_barrier2) (6)
	CreateDynamicObject(994,1961.09252930,-1179.05603027,19.03111267,0.00000000,0.00000000,2.73217773); //object(lhouse_barrier2) (7)
	CreateDynamicObject(994,1967.35742188,-1178.74487305,19.03111267,0.00000000,0.00000000,352.73010254); //object(lhouse_barrier2) (8)
	CreateDynamicObject(994,1971.26062012,-1179.23913574,19.03111267,0.00000000,0.00000000,0.72705078); //object(lhouse_barrier2) (9)
	CreateDynamicObject(994,1977.50341797,-1179.15734863,19.03111267,0.00000000,0.00000000,354.47509766); //object(lhouse_barrier2) (10)
	CreateDynamicObject(994,1983.75317383,-1179.76293945,19.03111267,0.00000000,0.00000000,346.97387695); //object(lhouse_barrier2) (11)
	CreateDynamicObject(994,1929.41613770,-1201.37170410,19.03111267,0.00000000,0.00000000,83.99780273); //object(lhouse_barrier2) (12)
	CreateDynamicObject(994,1931.97705078,-1207.10449219,19.03111267,0.00000000,0.00000000,113.99597168); //object(lhouse_barrier2) (13)
	CreateDynamicObject(994,1936.43469238,-1211.50549316,19.03111267,0.00000000,0.00000000,135.24414062); //object(lhouse_barrier2) (14)
	CreateDynamicObject(994,1941.81494141,-1214.75793457,19.03111267,0.00000000,0.00000000,148.99169922); //object(lhouse_barrier2) (15)
	CreateDynamicObject(994,1947.64465332,-1217.07971191,19.03111267,0.00000000,0.00000000,158.24108887); //object(lhouse_barrier2) (16)
	CreateDynamicObject(994,1953.66333008,-1219.03588867,19.03111267,0.00000000,0.00000000,162.23608398); //object(lhouse_barrier2) (17)
	CreateDynamicObject(994,1959.74768066,-1220.54516602,19.03111267,0.00000000,0.00000000,165.98510742); //object(lhouse_barrier2) (18)
	CreateDynamicObject(994,1965.99462891,-1221.04443359,19.03111267,0.00000000,0.00000000,175.48144531); //object(lhouse_barrier2) (19)
	CreateDynamicObject(994,1972.27966309,-1220.91674805,19.03111267,0.00000000,0.00000000,181.22912598); //object(lhouse_barrier2) (20)
	CreateDynamicObject(994,1978.55810547,-1220.51733398,19.03111267,0.00000000,0.00000000,183.72497559); //object(lhouse_barrier2) (21)
	CreateDynamicObject(994,1984.73999023,-1219.58398438,19.03111267,0.00000000,0.00000000,188.47436523); //object(lhouse_barrier2) (22)
	CreateDynamicObject(994,1989.90246582,-1181.15686035,19.03111267,0.00000000,0.00000000,342.72021484); //object(lhouse_barrier2) (23)
	CreateDynamicObject(994,1995.89355469,-1182.99206543,19.03111267,0.00000000,0.00000000,334.21850586); //object(lhouse_barrier2) (24)
	CreateDynamicObject(994,2001.55249023,-1185.71228027,19.03111267,0.00000000,0.00000000,324.71508789); //object(lhouse_barrier2) (25)
	CreateDynamicObject(994,2006.68322754,-1189.31005859,19.03111267,0.00000000,0.00000000,309.71191406); //object(lhouse_barrier2) (26)
	CreateDynamicObject(994,2010.72058105,-1194.13781738,19.03111267,0.00000000,0.00000000,283.71008301); //object(lhouse_barrier2) (27)
	CreateDynamicObject(994,2012.20556641,-1200.26452637,19.03111267,0.00000000,0.00000000,250.20544434); //object(lhouse_barrier2) (28)
	CreateDynamicObject(994,1990.81201172,-1218.02111816,19.03111267,0.00000000,0.00000000,194.47045898); //object(lhouse_barrier2) (29)
	CreateDynamicObject(994,1996.81604004,-1216.02038574,19.03111267,0.00000000,0.00000000,198.46899414); //object(lhouse_barrier2) (30)
	CreateDynamicObject(994,2010.11608887,-1206.13574219,19.03111267,0.00000000,0.00000000,227.45263672); //object(lhouse_barrier2) (31)
	CreateDynamicObject(994,2005.76611328,-1210.80932617,19.03111267,0.00000000,0.00000000,212.94995117); //object(lhouse_barrier2) (32)
	CreateDynamicObject(997,1997.25329590,-1215.84448242,19.02343750,0.00000000,0.00000000,26.25000000); //object(lhouse_barrier3) (2)
	//-- Barco
	CreateDynamicObjectEx(3069, 2810.70898, -2388.07202, 12.59900,   -22.00000, 0.00000, 270.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(3069, 2810.70898, -2438.07202, 12.59900,   -22.00000, 0.00000, 270.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(19123, 2810.50000, -2384.69897, 13.10000,   0.00000, 0.00000, 0.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(19123, 2810.50000, -2391.50000, 13.10000,   0.00000, 0.00000, 0.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(19123, 2810.50000, -2434.69897, 13.10000,   0.00000, 0.00000, 0.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(19123, 2810.50000, -2441.50000, 13.10000,   0.00000, 0.00000, 0.00000, 1000.000, 1000.000);

	//Decorado unity
	CreateDynamicObject(970, 1726.33997, -1870.09900, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1726.33997, -1866.01001, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1724.19995, -1863.93994, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1720.09998, -1863.93994, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1319, 1723.59998, -1862.80005, 12.88000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1319, 1723.59998, -1861.18994, 12.88000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1718.19995, -1860.00000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1722.30005, -1860.00000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1714.09998, -1860.00000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1710.19995, -1863.93994, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1699.59998, -1845.69995, 13.00000,   0.00000, 0.00000, 90.50000);
	CreateDynamicObject(970, 1699.63306, -1849.80005, 13.00000,   0.00000, 0.00000, 90.50000);
	CreateDynamicObject(970, 1710.00000, -1860.00000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1705.90002, -1860.00000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1701.80005, -1860.00000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1699.69995, -1857.90002, 13.00000,   0.00000, 0.00000, 90.50000);
	CreateDynamicObject(970, 1706.00000, -1863.93994, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1703.90002, -1866.00000, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1703.90002, -1870.09998, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1699.66882, -1853.90002, 13.00000,   0.00000, 0.00000, 90.50000);
	CreateDynamicObject(1319, 1704.30005, -1861.19995, 12.88000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1319, 1704.30005, -1862.80005, 12.88000,   0.00000, 0.00000, 270.00000);

	//- Casas
	CreateObject(14755, -79.76019, 1375.42126, 1079.20508,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, -80.68050, 1382.76636, 1077.94690,   0.00000, 0.00000, 0.00000);
	CreateObject(14756, -48.48457, 1458.49207, 1086.61377,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, -47.69450, 1457.73669, 1084.60840,   0.00000, 0.00000, 90.00000);
	CreateObject(14748, 41.38534, 1440.95935, 1083.41199,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 46.51220, 1438.62793, 1081.40894,   0.00000, 0.00000, 90.00000);
	CreateObject(14750, 11.03331, 1314.19482, 1088.33093,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 6.96000, 1304.85022, 1081.82263,   0.00000, 0.00000, 0.00000);
	CreateObject(14754, 85.66241, 1280.42249, 1082.82739,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 82.19940, 1271.31091, 1078.86523,   0.00000, 0.00000, 0.00000);
	CreateObject(14758, 155.35648, 1409.17212, 1087.30750,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 154.62061, 1409.09656, 1085.43335,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 156.12061, 1409.09656, 1085.43335,   0.00000, 0.00000, 0.00000);
	CreateObject(14714, 289.94763, 1509.23218, 1079.22510,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 289.17270, 1501.17688, 1077.42126,   0.00000, 0.00000, 0.00000);
	CreateObject(14700, 329.35416, 1516.43005, 1086.31531,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 328.56949, 1512.34375, 1084.81165,   0.00000, 0.00000, 0.00000);
	CreateObject(14711, 382.01254, 1498.42480, 1080.69409,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 391.08289, 1505.09924, 1079.09644,   0.00000, 0.00000, 90.00000);
	CreateObject(14710, 366.74869, 1381.78625, 1080.31787,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 376.35840, 1377.81616, 1078.80579,   0.00000, 0.00000, 90.00000);
	CreateObject(14701, 448.67178, 1363.61853, 1083.28748,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 447.54770, 1353.26965, 1081.21570,   0.00000, 0.00000, 0.00000);
	CreateObject(14703, 506.95187, 1366.91003, 1080.07947,   0.00000, 0.00000, 0.00000);
	CreateObject(1504, 508.85950, 1353.45654, 1075.78345,   0.00000, 0.00000, 0.00000);
	CreateObject(14722, 510.94690, 1363.57544, 1078.67737,   0.00000, 0.00000, 0.00000);
	CreateObject(14724, 510.99319, 1363.60266, 1078.67590,   0.00000, 0.00000, 0.00000);
	CreateObject(14715, 510.92340, 1363.51001, 1078.70215,   0.00000, 0.00000, 0.00000);
	CreateObject(14723, 510.91971, 1363.70605, 1078.84021,   0.00000, 0.00000, 0.00000);
	CreateObject(14736, 755.25836, 1419.45801, 1102.58032,   0.00000, 0.00000, 0.00000);
	CreateObject(14738, 753.20190, 1415.76831, 1104.04199,   0.00000, 0.00000, 0.00000);
	CreateObject(1504, 744.47321, 1411.75403, 1101.42236,   0.00000, 0.00000, 0.00000);
	CreateObject(14713, 289.97849, 1289.53406, 1079.25183,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 294.37189, 1284.51709, 1077.43616,   0.00000, 0.00000, 0.00000);
	CreateObject(14718, 188.29053, 1293.25732, 1081.13208,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 190.53439, 1288.35291, 1081.13416,   0.00000, 0.00000, 0.00000);
	CreateObject(14712, 287.90448, 1249.52588, 1083.25146,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 290.09601, 1241.95874, 1081.70117,   0.00000, 0.00000, 0.00000);
	CreateObject(14709, 245.01108, 1155.45520, 1081.63599,   0.00000, 0.00000, 0.00000);
	CreateObject(14735, 342.67169, 1081.66528, 1082.87891,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 325.45471, 1074.26355, 1081.25549,   0.00000, 0.00000, 0.00000);
	CreateObject(14708, 200.11450, 1119.56934, 1083.97693,   0.00000, 0.00000, 0.00000);
	CreateObject(14706, 277.86502, 1069.62952, 1085.65552,   0.00000, 0.00000, 0.00000);
	CreateObject(14707, 275.53461, 992.44232, 1087.27319,   0.00000, 0.00000, 0.00000);
	CreateObject(15029, 2265.87500, -1122.75220, 1049.62781,   0.00000, 0.00000, 0.00000);
	CreateObject(1535, 2260.34570, -1121.88794, 1047.87683,   0.00000, 0.00000, 90.00000);
	CreateObject(15031, 2281.78003, -1121.99768, 1049.92285,   0.00000, 0.00000, 0.00000);
	CreateObject(1535, 2284.04028, -1126.90771, 1049.91650,   0.00000, 0.00000, 0.00000);
	CreateObject(15055, 2374.03271, -1102.76465, 1049.87073,   0.00000, 0.00000, 0.00000);
	CreateObject(1504, 2369.77124, -1094.13245, 1048.61951,   0.00000, 0.00000, 0.00000);
	CreateObject(15042, 2318.45508, -1230.66187, 1048.40820,   0.00000, 0.00000, 0.00000);
	CreateObject(1501, 2312.65112, -1231.38013, 1046.40540,   0.00000, 0.00000, 0.00000);
	CreateObject(15053, 2243.98071, -1024.30042, 1048.01758,   0.00000, 0.00000, 0.00000);
	CreateObject(1535, 2243.21191, -1027.78198, 1046.76501,   0.00000, 0.00000, 0.00000);
	CreateObject(15054, 2260.93286, -1251.45007, 1051.05786,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 2273.48657, -1243.43054, 1047.59131,   0.00000, 0.00000, 90.00000);
	CreateObject(15041, 2158.54736, -1220.96997, 1050.11694,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 2149.11328, -1216.07935, 1048.11365,   0.00000, 0.00000, 0.00000);
	CreateObject(15046, 2364.22144, -1082.74231, 1048.01733,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 2363.47827, -1075.46021, 1046.76379,   0.00000, 0.00000, 0.00000);
	CreateObject(15048, 2364.55444, -1179.42346, 1055.79187,   0.00000, 0.00000, 0.00000);
	CreateObject(15059, 2364.56909, -1179.41418, 1055.79187,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 2372.00317, -1184.51221, 1052.20117,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 2373.50317, -1184.51221, 1052.20117,   0.00000, 0.00000, 0.00000);
	CreateObject(14859, 245.20708, 321.97745, 1000.59143,   0.00000, 0.00000, 0.00000);
	CreateObject(14865, 269.22012, 322.22049, 998.14349,   0.00000, 0.00000, 0.00000);
	CreateObject(14889, 363.51450, 304.98868, 998.14722,   0.00000, 0.00000, 0.00000);
	CreateObject(15033, 2177.35718, -1069.85181, 1049.47449,   0.00000, 0.00000, 0.00000);
	CreateObject(1535, 2190.13110, -1074.29504, 1049.47742,   0.00000, 0.00000, 90.00000);
	CreateObject(15034, 2254.38940, -1108.71704, 1049.87268,   0.00000, 0.00000, 0.00000);
	CreateObject(1535, 2254.09644, -1113.33044, 1048.11633,   0.00000, 0.00000, 0.00000);
	CreateObject(15030, 2293.09204, -1092.09229, 1049.62341,   0.00000, 0.00000, 0.00000);
	CreateObject(2904, 2298.69800, -1093.70605, 1048.97290,   0.00000, 0.00000, 90.00000);
	CreateObject(1535, 2298.64600, -1094.47375, 1047.87195,   0.00000, 0.00000, 90.00000);
	CreateObject(14876, 304.82809, 328.74170, 1003.21881,   0.00000, 0.00000, 0.00000);
	CreateObject(14877, 306.45309, 334.84299, 1000.21881,   0.00000, 0.00000, 0.00000);

	//de gaaznose
	new da_Object[104];
	da_Object[0] = CreateDynamicObject(19370, -2115.1728, -204.7023, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[0], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[1] = CreateDynamicObject(19370, -2118.4255, -204.7023, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[1], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[2] = CreateDynamicObject(19370, -2118.4255, -207.8123, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[2], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[3] = CreateDynamicObject(19386, -2116.7998, -204.8940, 36.0193, 0.0000, 0.0000, 90.0000, 0, 0); //wall034
	SetDynamicObjectMaterial(da_Object[3], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[4] = CreateDynamicObject(19370, -2115.1835, -207.8123, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[4], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[5] = CreateDynamicObject(19462, -2129.3139, -210.5481, 36.0157, 0.0000, 0.0000, -45.0000, 0, 0); //wall102
	SetDynamicObjectMaterial(da_Object[5], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[6] = CreateDynamicObject(19462, -2123.3005, -209.3461, 36.0157, 0.0000, 0.0000, 90.0000, 0, 0); //wall102
	SetDynamicObjectMaterial(da_Object[6], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[7] = CreateDynamicObject(19462, -2131.6347, -217.6180, 36.0157, 0.0000, 0.0000, 0.0000, 0, 0); //wall102
	SetDynamicObjectMaterial(da_Object[7], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[8] = CreateDynamicObject(19462, -2131.6347, -227.2180, 36.0157, 0.0000, 0.0000, 0.0000, 0, 0); //wall102
	SetDynamicObjectMaterial(da_Object[8], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[9] = CreateDynamicObject(19462, -2115.1640, -214.2082, 36.0157, 0.0000, 0.0000, 0.0000, 0, 0); //wall102
	SetDynamicObjectMaterial(da_Object[9], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[10] = CreateDynamicObject(19462, -2115.1640, -223.7883, 36.0157, 0.0000, 0.0000, 0.0000, 0, 0); //wall102
	SetDynamicObjectMaterial(da_Object[10], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[11] = CreateDynamicObject(19386, -2129.9443, -231.9540, 36.0193, 0.0000, 0.0000, 90.0000, 0, 0); //wall034
	SetDynamicObjectMaterial(da_Object[11], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[12] = CreateDynamicObject(19462, -2123.9011, -231.9561, 36.0157, 0.0000, 0.0000, 90.0000, 0, 0); //wall102
	SetDynamicObjectMaterial(da_Object[12], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[13] = CreateDynamicObject(19370, -2118.3554, -231.9421, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[13], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[14] = CreateDynamicObject(19370, -2116.4836, -231.8823, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[14], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[15] = CreateDynamicObject(19386, -2116.7998, -209.3641, 36.0193, 0.0000, 0.0000, 90.0000, 0, 0); //wall034
	SetDynamicObjectMaterial(da_Object[15], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[16] = CreateDynamicObject(5820, -2136.0971, -210.8551, 34.4229, 0.0000, 0.0000, -90.0000, 0, 0); //odrampbit02
	da_Object[17] = CreateDynamicObject(19370, -2116.8352, -212.1721, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[17], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[18] = CreateDynamicObject(19370, -2120.0468, -212.1721, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[18], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[19] = CreateDynamicObject(1585, -2123.5458, -210.8806, 34.9577, 0.0000, 0.0000, 90.0000, 0, 0); //tar_civ2
	da_Object[20] = CreateDynamicObject(19416, -2123.3544, -210.8717, 36.0087, 0.0000, 0.0000, 0.0000, 0, 0); //wall064
	SetDynamicObjectMaterial(da_Object[20], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[21] = CreateDynamicObject(19370, -2116.8352, -218.5322, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[21], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[22] = CreateDynamicObject(19370, -2120.0358, -218.5322, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[22], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[23] = CreateDynamicObject(19370, -2121.7753, -218.5322, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[23], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[24] = CreateDynamicObject(923, -2117.4548, -216.0918, 35.1688, 0.0000, 0.0000, 5.8000, 0, 0); //Packing_carates2
	da_Object[25] = CreateDynamicObject(1583, -2118.1103, -216.6385, 34.7628, 0.0000, 0.0000, 0.0000, 0, 0); //tar_gun2
	da_Object[26] = CreateDynamicObject(19370, -2115.1535, -230.2122, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[26], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[27] = CreateDynamicObject(3798, -2122.3208, -215.9199, 34.2984, 0.0000, 0.0000, 0.0000, 0, 0); //acbox3_SFS
	da_Object[28] = CreateDynamicObject(923, -2119.9738, -216.3474, 35.1688, 0.0000, 0.0000, -8.3999, 0, 0); //Packing_carates2
	da_Object[29] = CreateDynamicObject(1584, -2119.0722, -216.9190, 34.6774, 0.0000, 0.0000, 0.0000, 0, 0); //tar_gun1
	da_Object[30] = CreateDynamicObject(1585, -2122.8125, -217.4592, 34.2483, 0.0000, 0.0000, -92.5000, 0, 0); //tar_civ2
	da_Object[31] = CreateDynamicObject(19370, -2123.3469, -216.9721, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[31], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[32] = CreateDynamicObject(19370, -2124.9873, -215.3521, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[32], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[33] = CreateDynamicObject(19386, -2127.4333, -215.3442, 36.0193, 0.0000, 0.0000, 90.0000, 0, 0); //wall034
	SetDynamicObjectMaterial(da_Object[33], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[34] = CreateDynamicObject(19386, -2130.1437, -215.3442, 36.0193, 0.0000, 0.0000, 90.0000, 0, 0); //wall034
	SetDynamicObjectMaterial(da_Object[34], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[35] = CreateDynamicObject(19370, -2124.8688, -212.4021, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[35], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[36] = CreateDynamicObject(19370, -2128.0908, -212.4021, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[36], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[37] = CreateDynamicObject(19370, -2125.5810, -211.9320, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[37], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[38] = CreateDynamicObject(1584, -2125.8347, -211.3790, 34.6774, 0.0000, 0.0000, 90.0000, 0, 0); //tar_gun1
	da_Object[39] = CreateDynamicObject(1585, -2127.6555, -212.2016, 34.3472, 0.0000, 0.0000, 0.0000, 0, 0); //tar_civ2
	da_Object[40] = CreateDynamicObject(19370, -2130.0610, -222.1521, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[40], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[41] = CreateDynamicObject(19370, -2126.8994, -222.1521, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[41], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[42] = CreateDynamicObject(19370, -2124.3527, -221.1620, 36.0156, 0.0000, 0.0000, -45.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[42], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[43] = CreateDynamicObject(19416, -2130.0458, -219.7017, 36.0087, 0.0000, 0.0000, 90.0000, 0, 0); //wall064
	SetDynamicObjectMaterial(da_Object[43], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[44] = CreateDynamicObject(1583, -2123.6474, -217.0284, 34.7745, 0.0000, 0.0000, 90.0000, 0, 0); //tar_gun2
	da_Object[45] = CreateDynamicObject(1583, -2124.8476, -221.1166, 34.5262, 0.0000, 0.0000, 48.6999, 0, 0); //tar_gun2
	da_Object[46] = CreateDynamicObject(1585, -2130.0605, -219.8156, 34.9361, 0.0000, 0.0000, 0.0000, 0, 0); //tar_civ2
	da_Object[47] = CreateDynamicObject(1584, -2131.4851, -220.9062, 34.6925, 0.0000, 0.0000, 90.0000, 0, 0); //tar_gun1
	da_Object[48] = CreateDynamicObject(19370, -2125.5971, -220.4001, 33.5056, 0.0000, 0.0000, -45.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[48], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[49] = CreateDynamicObject(922, -2125.6704, -217.5006, 35.0222, 0.0000, 0.0000, -118.1000, 0, 0); //Packing_carates1
	da_Object[50] = CreateDynamicObject(19370, -2123.2487, -221.6522, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[50], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[51] = CreateDynamicObject(19429, -2128.3835, -221.3679, 35.1027, 0.0000, 0.0000, 0.0000, 0, 0); //wall069
	SetDynamicObjectMaterial(da_Object[51], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[52] = CreateDynamicObject(19370, -2121.6772, -220.0622, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[52], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[53] = CreateDynamicObject(19370, -2118.4567, -220.0622, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[53], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[54] = CreateDynamicObject(19370, -2116.8652, -221.3621, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[54], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[55] = CreateDynamicObject(19370, -2120.1081, -221.3621, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[55], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[56] = CreateDynamicObject(1583, -2123.0029, -220.7171, 34.6581, 0.0000, 0.0000, -91.5000, 0, 0); //tar_gun2
	da_Object[57] = CreateDynamicObject(1585, -2117.8627, -221.2078, 34.5522, 0.0000, 0.0000, 0.0000, 0, 0); //tar_civ2
	da_Object[58] = CreateDynamicObject(944, -2117.5361, -224.5289, 34.9723, 0.0000, 0.0000, 78.6000, 0, 0); //Packing_carates04
	da_Object[59] = CreateDynamicObject(944, -2118.3212, -228.4303, 34.9723, 0.0000, 0.0000, 32.2000, 0, 0); //Packing_carates04
	da_Object[60] = CreateDynamicObject(1584, -2117.7502, -229.2832, 34.7134, 0.0000, 0.0000, 33.0000, 0, 0); //tar_gun1
	da_Object[61] = CreateDynamicObject(1583, -2116.5466, -224.7402, 34.8627, 0.0000, 0.0000, 73.5000, 0, 0); //tar_gun2
	da_Object[62] = CreateDynamicObject(1585, -2116.7758, -225.8699, 35.0334, 0.0000, 0.0000, 71.5000, 0, 0); //tar_civ2
	da_Object[63] = CreateDynamicObject(942, -2121.0646, -230.7192, 34.8896, 0.0000, 0.0000, 0.0000, 0, 0); //CJ_DF_UNIT_2
	da_Object[64] = CreateDynamicObject(19370, -2123.2487, -224.8522, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[64], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[65] = CreateDynamicObject(19370, -2123.5891, -230.4121, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[65], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[66] = CreateDynamicObject(19370, -2128.9636, -230.4121, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[66], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[67] = CreateDynamicObject(19370, -2128.9636, -227.3321, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[67], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[68] = CreateDynamicObject(19370, -2127.3735, -225.7922, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[68], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[69] = CreateDynamicObject(1584, -2124.0319, -221.9297, 34.5355, 0.0000, 0.0000, 0.0000, 0, 0); //tar_gun1
	da_Object[70] = CreateDynamicObject(3577, -2126.4301, -228.3406, 35.0449, 0.0000, 0.0000, 0.0000, 0, 0); //DockCrates1_LA
	da_Object[71] = CreateDynamicObject(1583, -2128.0283, -227.5128, 35.0616, 0.0000, 0.0000, 90.0000, 0, 0); //tar_gun2
	da_Object[72] = CreateDynamicObject(1583, -2128.0283, -229.0227, 35.0616, 0.0000, 0.0000, 90.0000, 0, 0); //tar_gun2
	da_Object[73] = CreateDynamicObject(1585, -2126.9204, -230.2261, 35.0902, 0.0000, 0.0000, 0.0000, 0, 0); //tar_civ2
	da_Object[74] = CreateDynamicObject(19370, -2126.8994, -223.4021, 33.7356, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[74], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[75] = CreateDynamicObject(1584, -2127.5942, -224.1490, 34.8274, 0.0000, 0.0000, 87.1000, 0, 0); //tar_gun1
	da_Object[76] = CreateDynamicObject(1585, -2127.3547, -222.8378, 34.6758, 0.0000, 0.0000, 90.0000, 0, 0); //tar_civ2
	da_Object[77] = CreateDynamicObject(1583, -2130.9843, -228.8504, 34.7601, 0.0000, 0.0000, 0.0000, 0, 0); //tar_gun2
	da_Object[78] = CreateDynamicObject(1585, -2129.7919, -227.2067, 34.6716, 0.0000, 0.0000, 0.0000, 0, 0); //tar_civ2
	da_Object[79] = CreateDynamicObject(1502, -2117.6086, -204.9110, 34.2349, 0.0000, 0.0000, 0.0000, 0, 0); //Gen_doorINT04
	da_Object[80] = CreateDynamicObject(1502, -2116.0417, -209.3421, 34.2349, 0.0000, 0.0000, 180.0000, 0, 0); //Gen_doorINT04
	da_Object[81] = CreateDynamicObject(1502, -2126.6767, -215.2795, 34.2796, 0.0000, 0.0000, 180.0000, 0, 0); //Gen_doorINT04
	da_Object[82] = CreateDynamicObject(1502, -2130.9291, -215.3479, 34.2329, 0.0000, 0.0000, 0.0000, 0, 0); //Gen_doorINT04
	da_Object[83] = CreateDynamicObject(1502, -2130.7241, -232.0088, 34.2671, 0.0000, 0.0000, 0.0000, 0, 0); //Gen_doorINT04
	da_Object[84] = CreateDynamicObject(1584, -2128.6416, -221.3427, 34.7933, 0.0000, 0.0000, 90.0000, 0, 0); //tar_gun1
	da_Object[85] = CreateDynamicObject(2921, -2118.4533, -205.2211, 37.0861, 0.0000, 0.0000, 154.3999, 0, 0); //kmb_cam
	da_Object[86] = CreateDynamicObject(2921, -2115.3107, -209.4820, 37.0294, 0.0000, 0.0000, 43.8000, 0, 0); //kmb_cam
	da_Object[87] = CreateDynamicObject(2921, -2115.3925, -212.2509, 36.8157, 0.0000, 0.0000, 65.2999, 0, 0); //kmb_cam
	da_Object[88] = CreateDynamicObject(2921, -2131.5449, -215.8555, 36.9204, 0.0000, 0.0000, 174.9999, 0, 0); //kmb_cam
	da_Object[89] = CreateDynamicObject(2921, -2115.2966, -231.3661, 37.0120, 0.0000, 0.0000, -20.3999, 0, 0); //kmb_cam
	da_Object[90] = CreateDynamicObject(2921, -2123.5258, -231.5849, 36.8529, 0.0000, 0.0000, -14.5000, 0, 0); //kmb_cam
	da_Object[91] = CreateDynamicObject(2921, -2131.5151, -222.8318, 36.9422, 0.0000, 0.0000, 134.2999, 0, 0); //kmb_cam
	da_Object[92] = CreateDynamicObject(3867, -2133.1394, -221.0091, 25.5373, 0.0000, 0.0000, 90.0000, 0, 0); //ws_scaffolding_SFX
	da_Object[93] = CreateDynamicObject(3867, -2113.6806, -213.8392, 25.5642, 0.0000, 0.0000, -90.0000, 0, 0); //ws_scaffolding_SFX
	da_Object[94] = CreateDynamicObject(3867, -2113.6806, -230.6991, 25.5642, 0.0000, 0.0000, -90.0000, 0, 0); //ws_scaffolding_SFX
	da_Object[95] = CreateDynamicObject(5820, -2110.9968, -203.5312, 34.2629, 0.0000, 0.0000, 180.0000, 0, 0); //odrampbit02
	da_Object[96] = CreateDynamicObject(1963, -2121.0026, -208.5693, 34.7189, 0.0000, 0.0000, 0.0000, 0, 0); //est_desk
	da_Object[97] = CreateDynamicObject(2606, -2120.9609, -208.3531, 35.3990, 0.0000, 0.0000, 180.0000, 0, 0); //CJ_POLICE_COUNTER2
	da_Object[98] = CreateDynamicObject(2606, -2120.9609, -208.3531, 35.8589, 0.0000, 0.0000, 180.0000, 0, 0); //CJ_POLICE_COUNTER2
	da_Object[99] = CreateDynamicObject(2612, -2123.6745, -209.1782, 36.2586, 0.0000, 0.0000, 180.0000, 0, 0); //POLICE_NB2
	da_Object[100] = CreateDynamicObject(2619, -2120.8557, -209.1930, 36.7216, 0.0000, 0.0000, -90.0000, 0, 0); //mp_ammoambient
	da_Object[101] = CreateDynamicObject(1585, -2118.6103, -204.6605, 34.6795, 0.0000, 0.0000, 90.0000, 0, 0); //tar_civ2
	da_Object[102] = CreateDynamicObject(1584, -2118.6369, -205.9726, 34.7028, 0.0000, 0.0000, 90.0000, 0, 0); //tar_gun1
	da_Object[103] = CreateDynamicObject(1583, -2118.5288, -207.6379, 34.7058, 0.0000, 0.0000, 90.0000, 0, 0); //tar_gun2
	
	//portones pay'n'spray y garajes bomba - 23objs
	CreateDynamicObject(3055, -2716.31543, 217.10870, 4.81060,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3055, -1936.04590, 238.76511, 35.29234,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3055, -1904.38037, 277.68741, 44.22923,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3055, 488.26205, -1735.09851, 12.26543,   0.00000, 0.00000, -8.82009);
	CreateDynamicObject(3037, 2071.53345, -1831.41931, 14.71101,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3037, 1024.65637, -1029.40503, 33.17221,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3055, 719.99597, -462.45871, 16.18870,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3055, 1968.35901, 2162.46069, 12.03571,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3037, 2386.58740, 1043.47095, 11.59417,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3055, -99.86170, 1111.43054, 21.92550,   0.00000, 0.00000, 180.06000);
	CreateDynamicObject(3055, -2425.47705, 1028.07092, 54.36167,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3037, 2004.33838, 2317.83545, 10.89087,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3055, 2393.64673, 1483.40466, 13.03957,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3055, -1420.48181, 2591.06958, 58.05499,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3055, 2644.70435, -2039.17969, 13.13976,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3055, -1904.38037, 277.68741, 39.18500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3037, 1043.12134, -1026.01782, 33.16642,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3055, -99.86170, 1111.43054, 16.88100,   0.00000, 0.00000, 180.06000);
	CreateDynamicObject(3055, -2425.47705, 1028.07092, 49.32000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3037, 2004.76624, 2303.63574, 10.89087,   0.00000, 0.00000, 88.97997);
	CreateDynamicObject(3055, 2393.64673, 1483.40466, 7.99493,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3055, 1843.35730, -1855.73181, 13.08770,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3055, -1420.48181, 2591.06958, 53.01722,   0.00000, 0.00000, 180.00000);

    //Gym LV
	CreateDynamicObject(1472,765.0999800,-71.5600000,1000.0780000,0.0000000,0.0000000,0.0000000);
	CreateDynamicObject(1472,768.2999900,-65.7300000,1000.0700100,0.0000000,0.0000000,180.0000000);

	//iglesia - 114 objs
	CreateObject(3976, 1970.65723, -341.23883, 1100.22949,   0.00000, 0.00000, 0.00000);
	CreateObject(3976, 1962.70117, -400.46680, 1109.52942,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(9931, 1947.54004, -368.51270, 1108.01086,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(9931, 1980.55762, -368.51563, 1108.01086,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(11472, 1964.78711, -372.02051, 1089.22351,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(11472, 1963.28967, -372.02139, 1089.22351,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(11472, 1964.04480, -372.98050, 1089.46387,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(2896, 1959.29248, -370.91724, 1093.34314,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(11472, 1962.66919, -373.82990, 1087.66956,   90.00000, 180.00000, 270.00000, 32, 32);
	CreateDynamicObject(11472, 1965.41260, -373.81992, 1087.66992,   90.00000, 180.00000, 90.00000, 32, 32);
	CreateDynamicObject(970, 1970.61438, -368.20404, 1093.28040,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1968.51074, -368.20703, 1093.28040,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1957.52185, -368.25833, 1093.28040,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1959.61914, -368.25586, 1093.28040,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(6959, 1963.97839, -368.12149, 1072.75439,   90.00000, 0.00000, 0.25000, 32, 32);
	CreateDynamicObject(2960, 1964.05884, -348.98987, 1101.36646,   0.00000, 90.00000, 89.99451, 32, 32);
	CreateDynamicObject(2960, 1963.98291, -349.00000, 1101.70667,   90.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2960, 1964.05872, -348.99045, 1100.00586,   0.00000, 90.00000, 90.00000, 32, 32);
	CreateDynamicObject(3872, 1964.02686, -346.40851, 1102.33020,   0.00000, 155.25000, 90.27026, 32, 32);
	CreateDynamicObject(1667, 1962.98828, -370.41272, 1093.62292,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1664, 1962.83521, -370.42520, 1093.70105,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(2868, 1965.95605, -370.30142, 1093.53430,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(2869, 1964.02185, -373.78528, 1093.66992,   0.00000, 0.00000, 323.75000, 32, 32);
	CreateDynamicObject(2870, 1965.26270, -373.64063, 1093.66992,   0.00000, 0.00000, 350.03003, 32, 32);
	CreateDynamicObject(2270, 1965.47998, -352.47623, 1093.48364,   0.00000, 0.00000, 270.00000, 32, 32);
	CreateDynamicObject(2257, 1964.05615, -373.94995, 1095.86133,   0.00000, 0.00000, 180.00000, 32, 32);
	CreateDynamicObject(2271, 1962.60437, -352.58060, 1093.48804,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2357, 1964.05090, -370.68906, 1093.12402,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(2808, 1957.51367, -364.26172, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1959.68164, -364.26172, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1970.61328, -364.26172, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1968.44238, -364.26172, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1961.85547, -364.26172, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1966.27246, -364.26172, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2868, 1962.14697, -370.30624, 1093.53430,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(948, 1966.09277, -374.17285, 1092.72888,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(948, 1961.96313, -374.22888, 1092.72888,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(2894, 1963.95081, -370.94278, 1093.53430,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(3462, 1959.30408, -374.06839, 1094.24255,   0.00000, 0.00000, 270.00000, 32, 32);
	CreateDynamicObject(3462, 1968.78125, -374.06836, 1094.24255,   0.00000, 0.00000, 270.00000, 32, 32);
	CreateDynamicObject(949, 1956.02258, -353.46194, 1095.83191,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(2946, 1965.59985, -349.21301, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2946, 1962.47034, -349.19955, 1091.94543,   0.00000, 0.00000, 270.00000, 32, 32);
	CreateDynamicObject(2808, 1970.60681, -360.67249, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1968.43054, -360.67249, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1966.25378, -360.67249, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1957.52234, -360.67249, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1959.69580, -360.67249, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1961.86865, -360.67249, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1957.51660, -357.18195, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1959.69250, -357.18195, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1961.86780, -357.18195, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1970.61279, -357.18195, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1968.43701, -357.18195, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1966.26782, -357.18195, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(14705, 1962.68140, -373.67499, 1093.91895,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(14410, 1968.61401, -349.16000, 1092.01758,   0.00000, 0.00000, 270.00000, 32, 32);
	CreateDynamicObject(11472, 1971.98047, -351.97092, 1092.19568,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(11472, 1971.98047, -353.19620, 1092.19067,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(14410, 1959.47412, -349.41287, 1092.01660,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(11472, 1956.10046, -351.96487, 1092.19568,   0.00000, 0.00000, 270.00000, 32, 32);
	CreateDynamicObject(11472, 1956.10046, -353.19620, 1092.19067,   0.00000, 0.00000, 270.00000, 32, 32);
	CreateDynamicObject(11472, 1965.10974, -347.94531, 1095.44092,   0.00000, 90.00000, 180.00000, 32, 32);
	CreateDynamicObject(11472, 1962.98315, -347.94104, 1095.44019,   0.00000, 270.00000, 179.99451, 32, 32);
	CreateDynamicObject(1698, 1962.46606, -352.53400, 1095.31421,   0.00000, 0.00000, 270.27026, 32, 32);
	CreateDynamicObject(1698, 1962.87317, -352.53400, 1095.53918,   0.00000, 0.00000, 270.26917, 32, 32);
	CreateDynamicObject(1698, 1963.24683, -352.53400, 1095.76416,   0.00000, 0.00000, 270.26917, 32, 32);
	CreateDynamicObject(1698, 1965.60022, -352.53400, 1095.31421,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(1698, 1965.20435, -352.53400, 1095.53918,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(1698, 1964.72375, -352.53400, 1095.76416,   0.00000, 0.00000, 270.26917, 32, 32);
	CreateDynamicObject(970, 1964.05688, -353.88498, 1096.74243,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1959.94470, -353.88498, 1095.74719,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1955.77246, -353.88589, 1095.74719,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1968.17297, -353.88498, 1095.74719,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1972.25000, -353.88589, 1095.74719,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1959.97607, -351.29065, 1095.74719,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1968.10303, -351.29065, 1095.74719,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1965.96204, -349.21619, 1096.74170,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(970, 1962.13757, -349.21619, 1096.74243,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2887, 1964.04822, -349.34906, 1094.78955,   90.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(949, 1971.95068, -353.46039, 1095.83191,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(948, 1965.68555, -352.45767, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(948, 1962.38428, -352.45767, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1742, 1955.84399, -353.83832, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1742, 1957.28174, -353.83832, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1742, 1958.71167, -353.83832, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1742, 1960.15112, -353.83832, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1742, 1971.77673, -353.83832, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1742, 1970.34277, -353.83832, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1742, 1968.90930, -353.83832, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1742, 1967.47534, -353.83832, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(949, 1961.60730, -354.34103, 1092.58167,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(949, 1966.46326, -354.34805, 1092.58167,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1720, 1970.09338, -373.59497, 1092.72888,   0.00000, 0.00000, 180.00000, 32, 32);
	CreateDynamicObject(1720, 1970.91199, -373.58316, 1092.72888,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(741, 1969.29675, -369.22723, 1093.71252,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(3440, 1969.29126, -370.86264, 1091.08008,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(14455, 1955.32813, -348.54144, 1096.87585,   0.00000, 0.00000, 270.00000, 32, 32);
	CreateDynamicObject(14455, 1972.78357, -352.90488, 1096.86743,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.51917, -365.60892, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.51843, -363.77881, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.51868, -361.94879, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.52173, -360.12714, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.52637, -358.30560, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.52600, -356.47940, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.52344, -354.64612, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.52136, -352.82816, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.51868, -350.99310, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.52026, -349.16046, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2833, 1963.55750, -369.65057, 1092.72888,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(2834, 1968.81580, -372.52481, 1092.72888,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(6959, 1951.26587, -360.22650, 1095.56030,   310.00000, 180.00000, 90.00000, 32, 32);
	CreateDynamicObject(6959, 1976.87695, -356.75421, 1095.51965,   310.00000, 180.00000, 270.00000, 32, 32);
	CreateDynamicObject(6959, 1958.95715, -378.23306, 1096.33813,   309.99573, 179.99451, 180.00000, 32, 32);
	// Mercado Negro Ext - Int | By Edinson Walker | 50 Objetos
	CreateDynamicObject(18981, 2113.49634, -1999.67468, -0.58289,   0.00000, 0.00000, -50.00000);
	CreateDynamicObject(3050, 2119.14551, -2012.48022, 9.15464,   0.00000, 0.00000, 17.34000);
	CreateDynamicObject(3050, 2127.13770, -2005.59766, 9.15464,   0.00000, 0.00000, 41.34000);
	CreateDynamicObject(3050, 2123.64917, -2008.59717, 9.15464,   0.00000, 0.00000, 75.30000);
	CreateDynamicObject(1271, 2120.17993, -2001.39001, 7.31000,   0.00000, 0.00000, 41.88000);
	CreateDynamicObject(1271, 2119.64990, -2000.79004, 7.31000,   0.00000, 0.00000, 41.88000);
	CreateDynamicObject(3014, 2118.83008, -2000.48999, 7.19000,   0.00000, 0.00000, 41.40000);
	CreateDynamicObject(2359, 2119.04004, -2000.43994, 7.92000,   0.00000, 0.00000, -37.50000);
	CreateDynamicObject(2040, 2118.84009, -2000.34998, 7.80000,   0.00000, 0.00000, 52.92000);
	CreateDynamicObject(2358, 2119.35010, -1999.95996, 7.83000,   0.00000, 0.00000, -26.64000);
	CreateDynamicObject(2041, 2119.76001, -2000.37000, 7.91000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2042, 2119.39990, -1999.94995, 8.03000,   0.00000, 0.00000, -29.94000);
	CreateDynamicObject(2037, 2119.76001, -2000.77002, 7.78000,   0.00000, 0.00000, -39.48000);
	CreateDynamicObject(2038, 2119.76001, -2000.60999, 7.80000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2037, 2119.56006, -2000.78003, 7.78000,   0.00000, 0.00000, 13.50000);
	CreateDynamicObject(1650, 2120.70996, -2002.05005, 8.02000,   0.00000, 0.00000, -115.02000);
	CreateDynamicObject(3016, 2120.82007, -2001.65002, 7.86000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1650, 2120.40991, -2001.96997, 8.02000,   0.00000, 0.00000, -153.66000);
	CreateDynamicObject(3028, 2119.92993, -2001.91003, 7.72000,   98.16000, 46.74000, 0.00000);
	CreateDynamicObject(2358, 2121.06006, -2001.45996, 7.10000,   0.00000, 0.00000, 78.36000);
	CreateDynamicObject(2358, 2120.54004, -2002.04004, 7.08000,   0.00000, 0.00000, 45.30000);
	CreateDynamicObject(2358, 2121.81006, -2001.07996, 7.10000,   0.00000, 0.00000, 219.42000);
	CreateDynamicObject(335, 2120.51001, -2001.70996, 7.70000,   90.78000, 26.40000, 110.52000);
	CreateDynamicObject(3862, 2120.33008, -2000.53003, 8.09000,   0.00000, 0.00000, -45.60000);
	CreateDynamicObject(335, 2120.38989, -2001.40002, 7.70000,   90.78000, 26.40000, 238.74001);
	CreateDynamicObject(335, 2120.35010, -2001.87000, 7.70000,   90.78000, 26.40000, 70.44000);
	CreateDynamicObject(2359, 2121.39990, -2000.66003, 7.19000,   0.00000, 0.00000, -147.48000);
	CreateDynamicObject(2619, 2121.61011, -2000.05005, 8.35000,   2.16000, 1.02000, 44.28000);
	CreateDynamicObject(2619, 2120.65991, -1999.09998, 8.35000,   -18.96000, -0.06000, 44.28000);
	CreateDynamicObject(337, 2111.14990, -2005.28003, 7.33000,   -1.02000, -6.78000, 28.50000);
	CreateDynamicObject(337, 2111.02002, -2004.97998, 7.33000,   -1.02000, -6.78000, 28.50000);
	CreateDynamicObject(18633, 2110.98999, -2005.38000, 7.77000,   -1.20000, 95.64000, 26.94000);
	CreateDynamicObject(18634, 2110.43994, -2005.78003, 7.77000,   -0.30000, -96.12000, -132.42000);
	CreateDynamicObject(3863, 2110.31006, -2006.71997, 8.12000,   0.00000, 0.00000, 114.06000);
	CreateDynamicObject(18635, 2110.82007, -2006.59998, 7.81000,   -88.80000, -76.86000, 0.00000);
	CreateDynamicObject(18635, 2110.88989, -2006.72998, 7.81000,   -88.80000, -76.86000, 66.84000);
	CreateDynamicObject(18633, 2111.56006, -2007.35999, 7.77000,   0.00000, 0.00000, -31.32000);
	CreateDynamicObject(18633, 2111.48999, -2007.37000, 7.77000,   0.00000, 0.00000, -32.82000);
	CreateDynamicObject(1575, 2114.52002, -2010.56006, 7.69000,   -0.30000, 15.72000, 21.78000);
	CreateDynamicObject(3861, 2114.65991, -2011.63000, 8.05000,   0.00000, 0.00000, 136.80000);
	CreateDynamicObject(1575, 2114.17993, -2010.60999, 7.65000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1577, 2115.63086, -2011.59753, 7.65000,   0.00000, 0.00000, -86.04000);
	CreateDynamicObject(18451, 2126.25684, -2010.36853, 7.51649,   0.00000, 0.00000, 70.56002);
	CreateDynamicObject(4227, 2116.98584, -1997.30798, 9.49283,   0.00000, 0.00000, 39.91999);
	CreateDynamicObject(1458, 2123.44482, -2005.02600, 7.20789,   0.00000, 0.00000, -196.80000);
	CreateDynamicObject(2969, 2123.73999, -2002.88000, 7.31000,   0.00000, 0.00000, 46.56000);
	CreateDynamicObject(2969, 2124.12988, -2003.46997, 7.09000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2969, 2123.73999, -2002.88000, 7.10000,   0.00000, 0.00000, 46.56000);
	CreateDynamicObject(2969, 2124.68994, -2003.84998, 7.07000,   0.00000, 0.00000, 63.36000);
	CreateDynamicObject(1438, 2117.82373, -2014.41174, 6.96544,   0.00000, 0.00000, 17.64000);

	//almacenes x gaaz y edinsonwalker
	CreateDynamicObject(8419, 2805.68945, 2616.73096, -1.89150,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(8419, 2805.68945, 2615.64087, 25.00840,   0.00000, -180.00000, -90.00000, -1, 73);
	CreateDynamicObject(19447, 2797.75488, 2591.22192, 11.57190,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(19447, 2793.13647, 2593.83911, 11.57190,   0.00000, 0.00000, 180.00000, -1, 73);
	CreateDynamicObject(19447, 2801.53906, 2594.06812, 11.57190,   0.00000, 0.00000, 180.00000, -1, 73);
	CreateDynamicObject(19447, 2798.02173, 2597.67920, 11.57190,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(1497, 2793.19092, 2595.22559, 9.78470,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(3062, 2793.46606, 2591.74878, 11.13300,   17.69990, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(942, 2798.27515, 2592.59424, 12.04140,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(2912, 2800.88403, 2596.77954, 9.85020,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(2912, 2800.88525, 2596.01025, 9.85020,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(19447, 2798.04712, 2628.76074, 11.57190,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(19447, 2787.25830, 2633.66357, 11.57190,   0.00000, 0.00000, 180.00000, -1, 73);
	CreateDynamicObject(19447, 2800.16016, 2633.47485, 11.57190,   0.00000, 0.00000, 180.00000, -1, 73);
	CreateDynamicObject(19447, 2798.04712, 2638.33472, 11.57190,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(1497, 2800.10156, 2635.95508, 9.78470,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(2970, 2789.10156, 2629.13672, 9.85930,   -78.20000, 90.00000, 0.00000, -1, 73);
	CreateDynamicObject(2567, 2793.06909, 2637.15283, 11.55130,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(3005, 2800.05151, 2637.58960, 9.83540,   0.00000, 0.00000, -80.49990, -1, 73);
	CreateDynamicObject(5856, 2800.12134, 2631.51782, 11.83400,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(3015, 2788.14526, 2629.18677, 9.97180,   0.00000, 0.00000, -13.50000, -1, 73);
	CreateDynamicObject(1271, 2800.30444, 2594.65063, 10.16970,   0.00000, 0.00000, 14.20000, -1, 73);
	CreateDynamicObject(19447, 2849.43970, 2633.45435, 11.57190,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(19447, 2849.43970, 2623.84302, 11.57190,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(19447, 2844.60962, 2625.52271, 11.57190,   0.00000, 0.00000, 90.00000, -1, 73);
	CreateDynamicObject(19447, 2844.62036, 2638.33472, 11.57190,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(1497, 2844.71362, 2638.27661, 9.78470,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(19447, 2833.01953, 2633.45435, 11.57190,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(19447, 2833.01636, 2623.84302, 11.57190,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(2957, 2849.40625, 2635.01123, 11.42830,   0.00000, 0.00000, 90.00000, -1, 73);
	CreateDynamicObject(2957, 2849.40625, 2630.14160, 11.42830,   0.00000, 0.00000, 90.00000, -1, 73);
	CreateDynamicObject(1792, 2833.15479, 2627.12671, 10.20130,   -17.80000, -90.00000, 90.00000, -1, 73);
	CreateDynamicObject(1271, 2795.07422, 2593.00732, 10.16970,   0.00000, 0.00000, 14.20000, -1, 73);
	CreateDynamicObject(935, 2848.91602, 2626.02783, 10.38290,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(1685, 2839.29395, 2637.25806, 10.33140,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(2567, 2834.35522, 2634.08130, 11.55740,   0.00000, 0.00000, 90.00000, -1, 73);
	CreateDynamicObject(1431, 2842.61011, 2637.75513, 10.38120,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(1441, 2845.96729, 2626.00952, 10.45300,   0.00000, 0.00000, 180.00000, -1, 73);
	CreateDynamicObject(931, 2834.03687, 2629.41675, 10.85860,   0.00000, 0.00000, 90.00000, -1, 73);
	CreateDynamicObject(2679, 2837.37695, 2625.96753, 10.85590,   -12.90000, 0.00000, -180.00000, -1, 73);
	CreateDynamicObject(19447, 2788.41479, 2628.75781, 11.57190,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(19447, 2788.41479, 2638.33472, 11.57190,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(19447, 2834.99731, 2638.33472, 11.57190,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(19447, 2834.99731, 2625.52271, 11.57190,   0.00000, 0.00000, 90.00000, -1, 73);

	//LAWRENCE EDITADA
	new objlawrence;
	objlawrence = CreateDynamicObject(19482, 1350.380859, -1419.247680, 12.555134, 0.000000, -89.999961, -2.500000, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1349.411132, -1419.221435, 12.561554, 0.000000, -89.899963, 177.200088, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1350.044311, -1424.744384, 12.555134, 0.000000, -89.999961, -4.699999, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1349.138671, -1424.794189, 12.561554, 0.000000, -89.899963, 177.200088, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1349.588500, -1430.295288, 12.555134, 0.000000, -89.999961, -4.699999, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1348.756225, -1430.248291, 12.561347, 0.000000, -89.899963, 175.000045, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1349.160766, -1435.858520, 12.555134, 0.000000, -89.999961, -4.000000, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1348.268554, -1435.816406, 12.561347, 0.000000, -89.899963, 175.000045, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1348.801391, -1441.436401, 12.555134, 0.000000, -89.999961, -3.500000, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1347.886474, -1441.320800, 12.561468, 0.100000, -89.899963, 176.700012, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1348.562622, -1445.369140, 12.565135, 0.000000, -89.999961, -3.099999, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1347.605102, -1445.311401, 12.558361, 0.100000, -89.899963, 174.499954, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1346.791748, -1450.462768, 12.564579, 0.000000, -89.799942, 166.500015, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1347.784057, -1450.582519, 12.555134, 0.000000, -89.999961, -14.000001, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1346.503051, -1456.013793, 12.555134, 0.000000, -89.999961, -12.700007, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1345.608886, -1455.770507, 12.562569, -0.099997, -89.799942, 168.500061, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1344.494140, -1461.124023, 12.562873, 0.000000, -89.599945, 168.000030, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1345.278808, -1461.447509, 12.555134, 0.000000, -89.999961, -12.700007, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1344.061401, -1466.850952, 12.555134, 0.000000, -89.999961, -12.700007, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1342.815795, -1472.290039, 12.555134, 0.000000, -89.999961, -13.100006, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1343.283325, -1466.530639, 12.562457, 0.000000, -89.599945, 166.900009, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1342.017333, -1471.975219, 12.562457, 0.000000, -89.599945, 166.900009, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1341.708374, -1473.300537, 12.572457, 0.000000, -89.599945, 166.900009, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1342.531738, -1473.508178, 12.565135, 0.000000, -89.999961, -13.100006, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1340.054931, -1478.151245, 12.567923, 0.000000, -89.599945, 153.400009, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1340.770996, -1478.442626, 12.565135, 0.000000, -89.999961, -26.400026, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1338.308349, -1483.449096, 12.565135, 0.000000, -89.999961, -26.000032, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1335.028686, -1488.101562, 12.567646, 0.000000, -89.599945, 152.399963, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1337.566650, -1483.119995, 12.567923, 0.000000, -89.599945, 153.400009, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1335.791748, -1488.381835, 12.565135, 0.000000, -89.999961, -28.100023, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1333.215576, -1493.354980, 12.565135, 0.000000, -89.999961, -26.700029, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1332.453369, -1493.028198, 12.567646, 0.000000, -89.599945, 152.399963, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1331.709838, -1496.347290, 12.555134, 0.000000, -89.999961, -26.700029, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1330.923950, -1495.952880, 12.577646, 0.000000, -89.599945, 152.399963, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1328.093994, -1500.724121, 12.565551, 0.000000, -89.599945, 146.699890, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1328.961181, -1500.994750, 12.565135, 0.000000, -89.999961, -34.300033, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1325.816406, -1505.604003, 12.565135, 0.000000, -89.999961, -34.300033, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1325.013427, -1505.305664, 12.565135, 0.000000, -89.599945, 145.299957, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1321.837524, -1509.893676, 12.565135, 0.000000, -89.599945, 145.299957, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1322.677734, -1510.205566, 12.565135, 0.000000, -89.999961, -34.300033, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1318.719848, -1514.483764, 12.565483, 0.000000, -89.599945, 146.499984, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1319.549926, -1514.790283, 12.565135, 0.000000, -89.999961, -34.300033, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1317.069824, -1516.977172, 12.585482, 0.000000, -89.599945, 146.499984, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1317.758544, -1517.417114, 12.555135, 0.000000, -89.999961, -34.300033, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1315.360351, -1522.103637, 12.565135, 0.000000, -89.999961, -21.500028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1314.663085, -1521.624755, 12.560439, 0.000000, -89.599945, 159.300033, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1312.671630, -1526.837402, 12.560298, 0.000000, -89.599945, 158.800048, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1313.320068, -1527.285278, 12.565135, 0.000000, -89.999961, -21.500028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1311.281738, -1532.459838, 12.565135, 0.000000, -89.999961, -21.500028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1310.661499, -1532.021606, 12.560298, 0.000000, -89.599945, 158.800048, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1308.654907, -1537.196411, 12.560298, 0.000000, -89.599945, 158.800048, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1309.229858, -1537.670532, 12.565135, 0.000000, -89.999961, -21.500028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1307.325683, -1542.224121, 12.564909, 0.000000, -89.599945, 171.599945, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1306.513916, -1547.713500, 12.564909, 0.000000, -89.599945, 171.599945, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.760131, -1553.222778, 12.565328, 0.000000, -89.599945, 172.999984, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.009033, -1558.760986, 12.564842, 0.000000, -89.599945, 171.699890, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1308.251953, -1542.038085, 12.575136, 0.000000, -89.999961, -8.000026, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1307.476928, -1547.553466, 12.575136, 0.000000, -89.999961, -8.000026, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1306.700683, -1553.069824, 12.575136, 0.000000, -89.999961, -8.000026, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.921997, -1558.605712, 12.575136, 0.000000, -89.999961, -8.000026, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.462890, -1564.165527, 12.555134, 0.000000, -89.999961, -0.900027, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.414062, -1569.744506, 12.555134, 0.000000, -89.999961, -0.100028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.414550, -1575.333984, 12.555134, 0.000000, -89.999961, 0.099970, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.423950, -1580.893920, 12.555134, 0.000000, -89.999961, 0.099970, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.434082, -1586.463256, 12.555134, 0.000000, -89.999961, 0.099970, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.443847, -1592.043090, 12.555134, 0.000000, -89.999961, 0.099970, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.454345, -1597.632324, 12.555134, 0.000000, -89.999961, 0.099970, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.465087, -1603.231689, 12.555134, 0.000000, -89.999961, 0.099970, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.446777, -1608.791748, 12.555134, 0.000000, -89.999961, -0.600027, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.428833, -1614.371215, 12.555134, 0.000000, -89.999961, 0.199971, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.448486, -1619.950439, 12.555134, 0.000000, -89.999961, 0.199971, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.468139, -1625.530639, 12.555134, 0.000000, -89.999961, 0.199971, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.487792, -1631.119628, 12.555134, 0.000000, -89.999961, 0.199971, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.507568, -1636.710205, 12.555134, 0.000000, -89.999961, 0.199971, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.526611, -1642.299804, 12.555134, 0.000000, -89.999961, 0.199971, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.526245, -1647.870239, 12.555134, 0.000000, -89.999961, -0.200028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.506591, -1653.469604, 12.555134, 0.000000, -89.999961, -0.200028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.487426, -1659.049438, 12.555134, 0.000000, -89.999961, -0.200028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.467895, -1664.620239, 12.555134, 0.000000, -89.999961, -0.200028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.448852, -1670.209960, 12.555134, 0.000000, -89.999961, -0.200028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.429321, -1675.789794, 12.555134, 0.000000, -89.999961, -0.200028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.409301, -1681.369506, 12.555134, 0.000000, -89.999961, -0.200028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.389770, -1686.919677, 12.555134, 0.000000, -89.999961, -0.200028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.420654, -1692.499023, 12.555134, 0.000000, -89.999961, 0.299971, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.449829, -1698.088500, 12.555134, 0.000000, -89.999961, 0.299971, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.479370, -1703.687988, 12.555134, 0.000000, -89.999961, 0.299971, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.508666, -1709.257324, 12.555134, 0.000000, -89.999961, 0.299971, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.538085, -1714.847045, 12.555134, 0.000000, -89.999961, 0.299971, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.548339, -1720.417114, 12.555134, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.528320, -1725.946899, 12.555134, 0.000000, -89.999961, -0.500027, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.479614, -1731.538818, 12.555134, 0.000000, -89.999961, -0.500027, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.470947, -1737.127685, 12.555134, 0.000000, -89.999961, 0.099972, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.482177, -1742.706665, 12.555134, 0.000000, -89.999961, 0.099972, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.491943, -1748.296264, 12.555134, 0.000000, -89.999961, 0.099972, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.502441, -1753.885864, 12.555134, 0.000000, -89.999961, 0.099972, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.512695, -1759.485351, 12.555134, 0.000000, -89.999961, 0.099972, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.522949, -1765.075317, 12.555134, 0.000000, -89.999961, 0.099972, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.532714, -1770.634887, 12.555134, 0.000000, -89.999961, 0.099972, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.542724, -1776.224487, 12.555134, 0.000000, -89.999961, 0.099972, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.552856, -1781.794189, 12.555134, 0.000000, -89.999961, 0.099972, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.562500, -1787.334716, 12.555134, 0.000000, -89.999961, 0.099972, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.572265, -1792.914550, 12.555134, 0.000000, -89.999961, 0.099972, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.582763, -1798.483764, 12.555134, 0.000000, -89.999961, 0.099972, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.591918, -1804.054077, 12.555134, 0.000000, -89.999961, 0.099972, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.601440, -1809.623413, 12.555134, 0.000000, -89.999961, 0.099972, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.611083, -1815.193603, 12.555134, 0.000000, -89.999961, 0.099972, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.621582, -1820.793090, 12.555134, 0.000000, -89.999961, 0.099972, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.632080, -1826.393310, 12.555134, 0.000000, -89.999961, 0.099972, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.642578, -1831.962646, 12.555134, 0.000000, -89.999961, 0.099972, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1305.731811, -1837.500488, 12.555134, 0.000000, -89.999961, 1.399971, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.282836, -1837.525390, 12.565135, 0.000000, -89.999961, 0.299971, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.254638, -1831.945800, 12.565135, 0.000000, -89.999961, 0.299971, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.221191, -1826.356811, 12.565135, 0.000000, -89.999961, 0.299971, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.202880, -1820.766235, 12.565135, 0.000000, -89.999961, -0.000029, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.202880, -1815.186523, 12.565135, 0.000000, -89.999961, -0.000029, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.202880, -1809.588012, 12.565135, 0.000000, -89.999961, -0.000029, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.202880, -1804.007812, 12.565135, 0.000000, -89.999961, -0.000029, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.202758, -1798.417968, 12.565135, 0.000000, -89.999961, -0.000029, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.202880, -1792.838745, 12.565135, 0.000000, -89.999961, -0.000029, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.202880, -1787.258911, 12.565135, 0.000000, -89.999961, -0.000029, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.202880, -1781.679809, 12.565135, 0.000000, -89.999961, -0.000029, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.202880, -1776.100219, 12.565135, 0.000000, -89.999961, -0.000029, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.202880, -1770.520751, 12.565135, 0.000000, -89.999961, -0.000029, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.202880, -1764.951049, 12.565135, 0.000000, -89.999961, -0.000029, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.202880, -1759.361450, 12.565135, 0.000000, -89.999961, -0.000029, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.202880, -1753.790527, 12.565135, 0.000000, -89.999961, -0.000029, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.202880, -1748.210815, 12.565135, 0.000000, -89.999961, -0.000029, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.202880, -1742.640869, 12.565135, 0.000000, -89.999961, -0.000029, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.232910, -1737.070922, 12.565135, 0.000000, -89.999961, -0.500028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.281616, -1731.501098, 12.565135, 0.000000, -89.999961, -0.500028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.329711, -1725.911376, 12.565135, 0.000000, -89.999961, -0.500028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.378295, -1720.332397, 12.565135, 0.000000, -89.999961, -0.500028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.427246, -1714.753295, 12.565135, 0.000000, -89.999961, -0.500028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.475830, -1709.204101, 12.565135, 0.000000, -89.999961, -0.500028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1703.604492, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1698.033569, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1692.444091, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1686.863647, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1681.272583, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1675.683105, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1670.113525, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1664.533813, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1658.954101, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1653.363159, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1647.803833, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1642.214599, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1636.625366, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1631.045166, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1625.474975, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1619.884765, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1614.304931, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1608.714111, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1603.133789, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1597.553588, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1591.973876, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1586.383911, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1580.804199, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1575.245117, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.504272, -1569.675292, 12.565135, 0.000000, -89.999961, -0.000028, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1304.564331, -1564.104248, 12.565135, 0.000000, -89.999961, -1.200029, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4829, "airport_las", "Grass_128HV", 0x00000000);
	objlawrence = CreateDynamicObject(19369, 1305.115844, -1841.675903, 12.122813, 0.000000, 0.000000, 90.000000, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objlawrence, 0, 4835, "airoads_las", "concretenewb256", 0x00000000);
	objlawrence = CreateDynamicObject(19482, 1306.458740, -1841.772094, 12.136871, 0.000000, 0.000000, -90.000000, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterialText(objlawrence, 0, "{ffffff} ST- LAWRENCE BLVD", 120, "Engravers MT", 20, 1, 0x00000000, 0x00000000, 0);
	objlawrence = CreateDynamicObject(620, 1305.648559, -1723.933837, 12.092095, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1305.497680, -1711.653930, 12.092095, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1305.648559, -1737.793823, 12.092095, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1305.648559, -1748.763793, 12.092095, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1305.648559, -1758.604003, 12.092095, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1305.648559, -1774.074340, 12.092095, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1305.648559, -1799.465209, 12.092095, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1305.648559, -1815.815185, 12.092095, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1305.648559, -1829.374389, 12.092095, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1305.648559, -1838.934326, 12.092095, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.090454, -1689.056518, 12.792818, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.090454, -1692.436645, 12.792818, 0.000000, 0.000000, 180.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.090454, -1695.545654, 12.792818, 0.000000, 0.000000, 180.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.090454, -1698.655639, 12.792818, 0.000000, 0.000000, 180.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.090454, -1701.605102, 12.792818, 0.000000, 0.000000, 180.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.090454, -1704.944702, 12.792818, 0.000000, 0.000000, 180.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.090454, -1707.854492, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.090454, -1710.584472, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.090454, -1713.144653, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.830200, -1726.105224, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.090454, -1716.314208, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.090454, -1720.844482, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.850219, -1729.985473, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.090454, -1718.576049, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.780151, -1728.194946, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.770141, -1737.495361, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.640380, -1732.525024, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.770385, -1735.194824, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.660278, -1740.345336, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.680297, -1743.284545, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.700561, -1746.094238, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.760131, -1748.894165, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.880126, -1751.473388, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.850463, -1754.363525, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.090454, -1757.223510, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.090454, -1760.453735, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.090454, -1763.163696, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.090454, -1765.593750, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.090454, -1767.794067, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.090454, -1770.304199, 12.792818, 0.000000, 0.000000, 270.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.452880, -1772.594848, 12.792818, 0.000000, 0.000000, 279.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.082031, -1775.558593, 12.792818, 0.000000, 0.000000, -91.499992, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.006835, -1778.427368, 12.792818, 0.000000, 0.000000, -91.499992, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.946044, -1780.756713, 12.792818, 0.000000, 0.000000, -91.499992, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.867431, -1783.776367, 12.792818, 0.000000, 0.000000, -91.499992, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.747192, -1786.433471, 12.792818, 0.000000, 0.000000, -92.200004, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.812988, -1789.126953, 12.792818, 0.000000, 0.000000, -91.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.787719, -1792.006835, 12.792818, 0.000000, 0.000000, -91.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.734375, -1794.796386, 12.792818, 0.000000, 0.000000, -91.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.911865, -1797.560424, 12.792818, 0.000000, 0.000000, -91.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.070190, -1800.254638, 12.792818, 0.000000, 0.000000, -91.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.076416, -1803.045532, 12.792818, 0.000000, 0.000000, -91.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.060668, -1805.956420, 12.792818, 0.000000, 0.000000, -91.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.939941, -1808.064086, 12.792818, 0.000000, 0.000000, -91.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.947998, -1810.254638, 12.792818, 0.000000, 0.000000, -91.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.911376, -1812.164306, 12.792818, 0.000000, 0.000000, -91.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.020507, -1814.816650, 12.792818, 0.000000, 0.000000, -91.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.975341, -1817.185913, 12.792818, 0.000000, 0.000000, -91.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.947753, -1819.675659, 12.792818, 0.000000, 0.000000, -91.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.825805, -1821.863281, 12.792818, 0.000000, 0.000000, -91.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.781127, -1824.182861, 12.792818, 0.000000, 0.000000, -1.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.934448, -1827.117553, 12.792818, 0.000000, 0.000000, -1.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.883544, -1829.737670, 12.792818, 0.000000, 0.000000, -1.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.890380, -1832.498901, 12.792818, 0.000000, 0.000000, -1.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.839355, -1835.168457, 12.792818, 0.000000, 0.000000, -1.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.785278, -1837.988037, 12.792818, 0.000000, 0.000000, -1.100021, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1304.458984, -1841.007568, 12.782818, 0.000000, 0.000000, 210.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1305.703613, -1840.982299, 12.782818, 0.000000, 0.000000, 210.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1307.042114, -1549.617309, 12.382811, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1308.233032, -1541.567504, 12.382811, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1310.592041, -1533.577758, 12.382811, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1313.402587, -1526.847167, 12.382811, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1317.752441, -1516.646972, 12.382811, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1322.961914, -1509.867553, 12.382811, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1332.501342, -1494.588134, 12.382811, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1340.440795, -1478.778930, 12.382811, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1344.770629, -1464.258666, 12.382811, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1347.411010, -1451.408935, 12.382811, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1348.491821, -1441.269165, 12.382811, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1349.401977, -1428.609741, 12.382811, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(620, 1350.412597, -1420.449340, 12.382811, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1306.273071, -1550.402587, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1306.933471, -1546.022338, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1307.313842, -1542.282836, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1308.633789, -1538.032470, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1310.064208, -1534.582519, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1311.344116, -1531.442504, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1312.354370, -1528.342651, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1313.384765, -1525.193359, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1314.364624, -1522.493896, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1316.054321, -1519.363647, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1317.674072, -1516.643554, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1319.413818, -1514.013793, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1321.183593, -1511.543823, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1323.785156, -1507.433715, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1325.564941, -1504.733886, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1327.264526, -1502.453735, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1328.644653, -1500.013671, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1330.474853, -1497.294311, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1332.405151, -1494.024047, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1334.005004, -1490.853881, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1336.984863, -1484.974365, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1335.444946, -1487.854370, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1338.364746, -1481.924438, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1339.795043, -1478.654541, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1341.485107, -1475.574340, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1342.165771, -1472.994262, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1342.875976, -1470.114257, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1343.586669, -1467.534179, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1344.156860, -1465.014526, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1344.537231, -1462.874023, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1345.348022, -1459.913208, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1346.018676, -1456.943603, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1346.648803, -1453.994140, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1347.408813, -1450.853881, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1347.899291, -1447.953857, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1348.079467, -1445.463867, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1348.389526, -1442.643920, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1348.539672, -1439.963623, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1348.619750, -1437.133666, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1348.950073, -1434.433715, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1349.150268, -1432.023925, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1349.280395, -1429.143554, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1349.360473, -1426.853759, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1349.570678, -1423.963012, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objlawrence = CreateDynamicObject(870, 1349.981079, -1420.392089, 12.770616, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	
	//MAPEO DE PIZZERIA
	new objpizza;
	objpizza = CreateDynamicObject(5418, 2112.931884, -1797.091064, 19.335899, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objpizza, 0, 9514, "711_sfw", "shingles2", 0x00000000);
	SetDynamicObjectMaterial(objpizza, 3, 14651, "ab_trukstpd", "Bow_bar_flooring", 0x00000000);
	SetDynamicObjectMaterial(objpizza, 4, 6282, "beafron2_law2", "boardwalk2_la", 0x00000000);
	SetDynamicObjectMaterial(objpizza, 7, 10101, "2notherbuildsfe", "sl_vicwall01", 0x00000000);
	SetDynamicObjectMaterial(objpizza, 8, 4835, "airoads_las", "grassdry_128HV", 0x00000000);
	SetDynamicObjectMaterial(objpizza, 10, 6282, "beafron2_law2", "boardwalk2_la", 0x00000000);
	SetDynamicObjectMaterial(objpizza, 11, 9514, "711_sfw", "shingles2", 0x00000000);
	SetDynamicObjectMaterial(objpizza, 13, 10101, "2notherbuildsfe", "sl_vicwall01", 0x00000000);
	objpizza = CreateDynamicObject(2645, 2105.798583, -1807.822143, 13.974654, 0.000000, 0.000000, -90.000045, -1, -1, -1, 300.00, 300.00); 
	SetDynamicObjectMaterial(objpizza, 0, 18759, "dmcages", "tarmacplain1", 0x00000000);
	objpizza = CreateDynamicObject(2860, 2102.183837, -1793.228149, 13.304655, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(2860, 2103.732666, -1796.066528, 13.284658, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(2860, 2101.556640, -1798.170532, 13.284656, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(2860, 2103.870605, -1800.484130, 13.294652, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(19822, 2104.152587, -1800.788085, 13.284652, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(19822, 2101.830322, -1798.546142, 13.264653, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(19822, 2103.577148, -1795.524414, 13.274645, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(19822, 2101.980957, -1792.712768, 13.264655, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(970, 2104.971679, -1786.075195, 13.007606, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(970, 2109.138427, -1786.089843, 12.997123, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(970, 2113.310546, -1786.088989, 12.998290, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(970, 2117.483886, -1786.083862, 13.007858, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(970, 2121.652587, -1786.086547, 13.007704, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(970, 2100.820068, -1786.078125, 13.012809, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(655, 2131.248046, -1801.815307, 12.564387, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(1457, 2133.610839, -1795.105468, 14.144651, 0.000000, 0.000000, -89.200012, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(19831, 2131.741699, -1786.353271, 12.553581, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(19997, 2131.788085, -1789.263427, 12.560590, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(2121, 2130.155029, -1789.366821, 12.993153, 0.000000, 0.000000, 92.800048, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(2121, 2133.419189, -1789.198364, 13.017221, 0.000000, 0.000000, -86.800041, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(1486, 2131.724365, -1789.201538, 13.549839, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(2803, 2133.926025, -1786.536010, 12.860087, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(11744, 2131.398925, -1789.245117, 13.412526, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(11744, 2132.224365, -1789.189697, 13.415384, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(11716, 2131.392089, -1789.041748, 13.410139, 0.000000, 0.000000, -89.899978, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(11716, 2132.242675, -1789.394531, 13.431371, 0.000000, 0.000000, 91.299980, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(11715, 2132.231445, -1788.970214, 13.406342, 0.000000, 0.000000, 94.699974, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(11715, 2131.389892, -1789.503906, 13.410448, 0.000000, 0.000000, -90.999984, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(2702, 2132.236572, -1789.188232, 13.419767, 4.900001, -95.500015, -28.100000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(2702, 2131.406250, -1789.251708, 13.405503, 0.000000, -97.299949, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(19580, 2131.734863, -1786.350097, 13.373528, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(1280, 2130.818115, -1801.219482, 12.923323, 0.000000, 0.000000, -53.699985, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(1280, 2131.053222, -1803.157714, 12.890012, 0.000000, 0.000000, 59.700027, -1, -1, -1, 300.00, 300.00); 
	objpizza = CreateDynamicObject(19632, 2129.951416, -1795.176025, 12.498587, 0.000000, 0.000000, -67.099998, -1, -1, -1, 300.00, 300.00); 

	return 1;
}

forward create_object_ext(modelid, Float: X, Float: Y, Float: Z, Float: rX, Float: rY, Float: rZ);
public create_object_ext(modelid, Float: X, Float: Y, Float: Z, Float: rX, Float: rY, Float: rZ)
{
	return CreateDynamicObject(modelid, X, Y, Z, rX, rY, rZ, 0, 0, -1, 1000.0, 500.0);
}

forward CreateObjectEx(modelid, Float: X, Float: Y, Float: Z, Float: rX, Float: rY, Float: rZ, Float: DrawDistance);
public CreateObjectEx(modelid, Float: X, Float: Y, Float: Z, Float: rX, Float: rY, Float: rZ, Float: DrawDistance)
{
	MAX_OBJECT_FIJOS++;
	return CreateObject(modelid, X, Y, Z, rX, rY, rZ, DrawDistance);
}