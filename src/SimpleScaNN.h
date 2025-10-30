#ifndef SIMPLESCANN_H
#define SIMPLESCANN_H

#include "Utils.h"

class SimpleScaNN
{
private:
    int dim;                                  // số chiều dữ liệu
    int count;                                // số lượng điểm dữ liệu
    std::vector<std::vector<Point>> clusters; // danh sách cụm
    std::vector<Point> centers;               // danh sách tâm cụm

    int getClusterIndex(const Point &p) const;

public:
    SimpleScaNN(int d);

    // Training
    void train(const std::vector<Point> &dataset);

    // Query
    std::vector<std::string> search(const Point &query, int k) const;

    // Getter
    int getDim() const;
    int size() const;                             // O(1)
    std::vector<Point> getClusterCenters() const; // O(1)
};

#endif // SIMPLESCANN_H
