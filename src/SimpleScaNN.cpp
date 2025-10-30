#include "SimpleScaNN.h"

SimpleScaNN::SimpleScaNN(int d) : dim(d)
{
    int numClusters = 1 << dim; // 2^dim cụm
    clusters.resize(numClusters);
    centers.resize(numClusters, Point{std::vector<double>(dim, 0.0)});
    count = 0;
}

int SimpleScaNN::getClusterIndex(const Point &p) const
{
    int idx = 0;
    for (int i = 0; i < dim; i++)
    {
        if (p.coords[i] >= 0)
        {
            idx |= (1 << i);
        }
    }
    return idx;
}

void SimpleScaNN::train(const std::vector<Point> &dataset)
{
    // TRAINING: phân cụm

    count = dataset.size();
}

std::vector<std::string> SimpleScaNN::search(const Point &query, int k) const
{
    std::vector<std::string> result;
    if (centers.empty())
        return result;

    // 1. Tính khoảng cách query → cluster center

    // 2. Sắp xếp cluster theo khoảng cách

    // 3. Từ các cluster gần nhất, lấy tất cả point và tính khoảng cách đến query

    // 4. Sắp xếp tất cả point theo khoảng cách và lấy K point gần nhất

    // 5. trả về point.name
}

int SimpleScaNN::getDim() const
{
    return dim; // O(1)
}

int SimpleScaNN::size() const
{
    return count; // O(1)
}

std::vector<Point> SimpleScaNN::getClusterCenters() const
{
    return centers; // O(1)
}
