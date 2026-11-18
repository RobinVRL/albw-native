#include "ghidra_types.h"

extern int func_0025A64C(int param_1);
extern int func_00296B84(int param_1,int *param_2,int param_3);
extern int func_004EB908(int param_1,int param_2,int param_3);
extern int func_00588090(int param_1,int param_2);
extern int *DAT_00258644;
extern int *DAT_00258648;
extern int DAT_0025864c;
extern undefined4 DAT_00258650;

// USA 002585A0 <- EU 002585C8 (Ghidra, non-matching)
// GLOBAL DAT_00258644 int *
// GLOBAL DAT_00258648 int *
// GLOBAL DAT_0025864c int
// GLOBAL DAT_00258650 undefined4

void func_002585A0(void)

{
  int *piVar1;
  bool bVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  piVar1 = DAT_00258644;
  bVar2 = func_00588090(*DAT_00258644,0x1e);
  if ((bVar2) && (*(int *)(*(int *)(*DAT_00258648 + 0x1c) + 4) < 0x3f800000)) {
    func_004EB908(*piVar1,0x3c,1);
    func_0025A64C(*piVar1);
    local_c = *(undefined4 *)(DAT_0025864c + 0xc);
    local_10 = DAT_00258650;
    func_00296B84(*piVar1,&local_10,0x1e);
  }
  return;
}

