#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00520FC0(void);
extern int func_0053F294(int param_1);
extern int func_0068C690(float *param_1);
extern int *DAT_0054e1b0;
extern float DAT_0054e1b4;

// USA 0054E0F8 <- EU 0054E0D0 (Ghidra, non-matching)
// GLOBAL DAT_0054e1b0 int *
// GLOBAL DAT_0054e1b4 float

undefined4 func_0054E0F8(int *param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  piVar1 = DAT_0054e1b0;
  iVar5 = param_1[0xb3];
  iVar2 = func_0053F294(*DAT_0054e1b0);
  if (iVar5 == iVar2) {
    pfVar3 = (float *)(**(code **)(*param_1 + 0x78))(param_1);
    pfVar4 = (float *)func_00520FC0();
    func_00115C70(&local_24,pfVar3,pfVar4);
    local_30 = local_24;
    uStack_2c = uStack_20;
    uStack_28 = uStack_1c;
    iVar2 = func_0068C690(&local_30);
    if (((int)(char)param_1[0x124] != iVar2 + 0x20000000U >> 0x1e) ||
       (iVar5 = param_1[0xb3], iVar2 = func_0053F294(*piVar1), iVar5 != iVar2)) {
      return 0;
    }
  }
  else if ((*(char *)((int)param_1 + 0x4ea) == '\0') || (0 < param_1[0x12e])) {
    bVar6 = false;
    if (ALBW_AS_F32(param_1[0xf7]) == DAT_0054e1b4) {
      bVar6 = ALBW_AS_F32(param_1[0xf9]) == DAT_0054e1b4;
    }
    if (bVar6) {
      return 0;
    }
  }
  return 1;
}

