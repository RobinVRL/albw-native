#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int DAT_003131f8;
extern float DAT_003131fc;

// USA 003131A4 <- EU 00313180 (Ghidra, non-matching)
// GLOBAL DAT_003131f8 int
// GLOBAL DAT_003131fc float

void func_003131A4(int param_1)

{
  float *pfVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((float *)(albw_frame + 0x8))
  #define local_10 (*(float *)(albw_frame + 0x10))
  if ((*(char *)(param_1 + 0x988) != '\0') && (*(char *)(param_1 + 0x988) == '\x01')) {
    pfVar1 = (float *)func_00520FC0();
    func_00115C70(local_18,pfVar1,(float *)(param_1 + 0x3d0));
    iVar2 = func_004904CC(local_18[0],local_10);
    iVar2 = func_0051D2F4((int *)(param_1 + 1000),iVar2,DAT_003131f8,0x7fffffff,DAT_003131fc);
    if (iVar2 != 0) {
      *(char *)(param_1 + 0x988) = *(char *)(param_1 + 0x988) + '\x01';
    }
  }
  return;
}

