#ifndef sorts_h
#define sorts_h
#include <vector>
struct stats {
    size_t comparison_count = 0;
    size_t copy_count = 0;
};



stats bubble_sort(std::vector<int>a) {
    stats res;
    auto n = a.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            res.comparison_count++;
            if (a[j] < a[i]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
                res.copy_count += 3;
            }
        }
    }
    return res;
}

stats quick_sort(std::vector<int>& a, stats& res, int L, int R) {
    if (L < R) {
        int i = L, j = R;
        int x = a[(L + R) / 2];
        do {
            res.comparison_count++;
            while (a[i] > x) {
                res.comparison_count++;
                i++;
            }
            res.comparison_count++;
            while (a[j] < x) {
                res.comparison_count++;
                j--;
            }
            if (i <= j) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
                res.copy_count += 3;
                i++;
                j--;
            }
        } while (i <= j);
        quick_sort(a, res, L, j);
        quick_sort(a, res, i, R);
    }
    return res;
}



std::vector<double> get_stats_random(int n) {// для задания а
    std::vector<double>res(4, 0);
    for (int i = 0; i < n; ++i) {
        std::vector<int>a;
        for (int i = 0; i < n; ++i) {
            a.push_back(rand() % 2670);
        }
        auto bub = bubble_sort(a);
        stats st;
        auto quic = quick_sort(a, st, 0, n - 1);
        res[0] += bub.comparison_count;
        res[1] += bub.copy_count;
        res[2] += quic.comparison_count;
        res[3] += quic.copy_count;
    }
    res[0] = res[0] / 100.0;
    res[1] = res[1] / 100.0;
    res[2] = res[2] / 100.0;
    res[3] = res[3] / 100.0;
    return res;
}



std::vector<int> get_stats_sort(int n) {// для задания б
    std::vector<int>res(4, 0);
    std::vector<int>a(n);
    for (int i = 0; i < n; ++i) a[i] = n - i;
    auto bub = bubble_sort(a);
    stats st;
    auto quic = quick_sort(a, st, 0, n - 1);
    res[0] += bub.comparison_count;
    res[1] += bub.copy_count;
    res[2] += quic.comparison_count;
    res[3] += quic.copy_count;
    return res;
}



std::vector<int> get_stats_reverse_sort(int n) {// для задания в
    std::vector<int>res(4, 0);
    std::vector<int>a(n);
    for (int i = 0; i < n; ++i) a[i] = i;
    auto bub = bubble_sort(a);
    stats st;
    auto quic = quick_sort(a, st, 0, n - 1);
    res[0] += bub.comparison_count;
    res[1] += bub.copy_count;
    res[2] += quic.comparison_count;
    res[3] += quic.copy_count;
    return res;
}
#endif /* sorts_h */