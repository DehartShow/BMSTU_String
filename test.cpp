#include <gtest/gtest.h>
#include "main.h"
using namespace bmstu;


TEST(BMSTU_Test, test1){
    string a = "Ershov";
    ASSERT_EQ(a[0], 'E');
}
