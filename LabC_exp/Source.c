double nabs(double x) {
    return x > 0 ? x : (-1 * x);
}


double e_eps(double eps) {

    int n = 0;
    double sum = 1, temp = 1;

    while (temp > eps) {
        n++;
        temp = temp * 1 / n;
        sum += temp;
    }

    return sum;
}

double eps_test() {
    int r = 0;  
    r = r || nabs(e_eps(0.1) - 2.7) >= 0.1 ;
    r = r || nabs(e_eps(0.0001) - 2.7182) >= 0.0001;
    r = r || nabs(e_eps(0.000001) - 2.718281) >= 0.000001;
    r = r || nabs(e_eps(0.00000001) - 2.71828182) >= 0.00000001;
    r = r || nabs(e_eps(0.0000000001) - 2.7182818284) >= 0.0000000001;
    r = r || nabs(e_eps(0.000000000000001) - 2.718281828459045) >= 0.000000000000001;
    return r;
}

int main() {
    return eps_test();
}
