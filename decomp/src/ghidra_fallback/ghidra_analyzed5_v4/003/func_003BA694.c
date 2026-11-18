#include "ghidra_types.h"

extern int func_003840A0(int param_1,int param_2);
extern int func_003B1740(int *param_1);
extern int func_004EA17C(int param_1,int *param_2,undefined4 *param_3);
extern int func_00542D5C(void);
extern float DAT_003ba744;
extern int DAT_003ba754;
extern int *DAT_003ba758;
extern char s_SE_PL_SLIDE_003ba748[];

// USA 003BA694 <- EU 003BA670 (Ghidra, non-matching)
// GLOBAL DAT_003ba744 float
// GLOBAL DAT_003ba754 int
// GLOBAL DAT_003ba758 int *
// GLOBAL s_SE_PL_SLIDE_003ba748 string

undefined4 func_003BA694(int *param_1)

{
  bool bVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  bVar1 = func_00542D5C();
  if ((bVar1) &&
     (iVar2 = *(int *)(*(int *)(param_1[0x12] + 0x8dc) + 0x14), *(char *)(iVar2 + 0x1c) == '\0')) {
    if (*(float *)(iVar2 + 0x10) < DAT_003ba744) {
      if (DAT_003ba744 < *(float *)(iVar2 + 8)) goto LAB_003ba6f4;
    }
    else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) goto LAB_003ba6f4;
    (**(code **)(*param_1 + 0xfc))(param_1);
  }
LAB_003ba6f4:
  bVar1 = func_003840A0(param_1[0x12] + 0x8c0,0xf);
  if (bVar1) {
    local_c = s_SE_PL_SLIDE_003ba748;
    local_10 = DAT_003ba754;
    func_004EA17C(*DAT_003ba758,&local_10,(undefined4 *)0x0);
  }
  return func_003B1740(param_1);
}

