#include "Point.h"

Point::Point()
{
}

Point::Point(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

void Point::input()
{
	cout << "Введите координаты x, y, z: ";
	cin >> x >> y >> z;
}

void Point::output() const
{
	cout << "Координаты точки: (" << x << ", " << y << ", " << z << ")\n";
}

double Point::getX() const
{
	return x;
}

double Point::getY() const
{
	return y;
}

double Point::getZ() const
{
	return z;
}

void Point::setX(double newX)
{
    this->x = x;
}

void Point::setY(double newY)
{
    this->y = y;
}

void Point::setZ(double newZ)
{
    this->z = z;
}

void Point::saveToFile(const string& filename) const
{
    ofstream file(filename);
    if (file.is_open()) {
        file << x << " " << y << " " << z << endl;
        file.close();
        cout << "Данные успешно сохранены в файл " << filename << endl;
    }
    else {
        cerr << "Не удалось открыть файл для сохранения данных." << endl;
    }
}

void Point::loadFromFile(const string& filename)
{
    ifstream file(filename);
    if (file.is_open()) {
        file >> x >> y >> z;
        file.close();
        cout << "Данные успешно загружены из файла " << filename << endl;
    }
    else {
        cerr << "Не удалось открыть файл для загрузки данных." << endl;
    }
}
