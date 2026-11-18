#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00165E7C(int *param_1,int *param_2,int *param_3,int param_4);
extern undefined4 *DAT_00308268;
extern int DAT_0030826c;
extern float *DAT_00308270;

// USA 003081E4 <- EU 003081C0 (Ghidra, non-matching)
// GLOBAL DAT_00308268 undefined4 *
// GLOBAL DAT_0030826c int
// GLOBAL DAT_00308270 float *

void func_003081E4(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define local_4c (*(undefined4 *)(albw_frame + 0x4))
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define fStack_30 (*(float *)(albw_frame + 0x20))
  #define fStack_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  #define local_18 (*(float *)(albw_frame + 0x38))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x40))
  if (*(char *)(param_1 + 0x560) == '\x03') {
    *(undefined1 *)(param_1 + 0x560) = 4;
    local_50 = *(int *)(DAT_0030826c + 0x50);
    local_44 = *(undefined4 *)(DAT_0030826c + 0x5c);
    uStack_40 = *(undefined4 *)(DAT_0030826c + 0x60);
    uStack_3c = *(undefined4 *)(DAT_0030826c + 100);
    uStack_38 = *(undefined4 *)(DAT_0030826c + 0x68);
    local_28 = *(undefined4 *)(DAT_0030826c + 0x78);
    local_4c = *DAT_00308268;
    local_48 = DAT_00308268[1];
    local_34 = *DAT_00308270;
    fStack_30 = DAT_00308270[1];
    fStack_2c = DAT_00308270[2];
    func_00115C54(&local_18,(float *)(param_1 + 0x3d0),DAT_00308270);
    local_24 = local_18;
    uStack_20 = uStack_14;
    uStack_1c = uStack_10;
    func_00165E7C((int *)(param_1 + 0x458),(int *)&local_24,&local_50,0);
  }
  return;
}

