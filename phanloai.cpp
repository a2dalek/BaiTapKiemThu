#include "phanloai.h"

int phanloai(double diem_trung_binh, int hanh_kiem) {

    // diem_trung_binh không hợp lệ
    if (diem_trung_binh > 10.0 || diem_trung_binh < 0.0) {
        return -1;
    }

    // hanh_kiem không hợp lệ
    if (hanh_kiem > 2 || hanh_kiem < 0) {
        return -1;
    }

    // học sinh giỏi
    if (diem_trung_binh >= 8.0 && hanh_kiem == 2) {
        return 2;
    }

    // học sinh tiên tiến
    if (diem_trung_binh >= 6.5 && (hanh_kiem == 2 || hanh_kiem ==1)) {
        return 1;
    }
    
    // học sinh yếu
    return 0;
}