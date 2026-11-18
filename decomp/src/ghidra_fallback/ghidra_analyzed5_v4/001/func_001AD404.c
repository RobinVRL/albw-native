// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_0051D37C(int *param_1,int param_2,int param_3);
extern int func_00521184();
extern int func_00588BE4(int param_1);
extern int func_0058E2B8(int *param_1);
extern int *DAT_001ad544;
extern int *DAT_001ad548;
extern int *DAT_001ad54c;
extern int *DAT_001ad550;
extern int *DAT_001ad554;

// USA 001AD404 <- EU 001AD404 (Ghidra, non-matching)
// GLOBAL DAT_001ad544 int *
// GLOBAL DAT_001ad548 int *
// GLOBAL DAT_001ad54c int *
// GLOBAL DAT_001ad550 int *
// GLOBAL DAT_001ad554 int *

void func_001AD404(void)

{
  _Alignas(8) unsigned char albw_frame[0x40]; /* entry_sp - 0x0 .. entry_sp + 0x40 */
#define stack0x00000000 (*(undefined4 *)(albw_frame + 0x0))
  int iVar1;
  uint uVar2;
  float *in_r3;
  int unaff_r4;
  int *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  float in_s16;
  int iStack00000000;
  
  if (*(char *)(unaff_r6 + 0xc0) != '\v' && *(char *)(unaff_r6 + 0xc0) != '\f') {
    if (NAN(*(float *)(unaff_r4 + 0x3dc)) || NAN(in_s16)) {
      func_0051D27C((int *)(unaff_r4 + 1000),-*DAT_001ad544,*unaff_r5);
    }
    else {
      func_0051D27C((int *)(unaff_r4 + 1000),*DAT_001ad544,*unaff_r5);
    }
  }
  func_004F5BD8(unaff_r4,(uint *)0x0,(int **)0x0,in_r3);
  iVar1 = func_00588BE4(unaff_r4);
  if ((iVar1 == *DAT_001ad548) || (iVar1 = func_00588BE4(unaff_r4), iVar1 == *DAT_001ad54c)) {
    iStack00000000 = func_00521184(unaff_r4);
    iStack00000000 = iStack00000000 - *(int *)(unaff_r4 + 1000);
    uVar2 = func_0058E2B8(&stack0x00000000);
    if (0x3fffffff < uVar2) {
      iStack00000000 = -0x80000000 - iStack00000000;
    }
    func_0051D37C(&stack0x00000000,-*DAT_001ad550,*DAT_001ad550);
    func_0051D27C((int *)(unaff_r4 + 0x9bc),iStack00000000,*DAT_001ad554);
    *(undefined4 *)(unaff_r4 + 0x8ec) = *(undefined4 *)(unaff_r4 + 0x9bc);
  }
  *(undefined4 *)(unaff_r7 + 0xf8) = *(undefined4 *)(unaff_r6 + 0x1b8);
  return;
}

