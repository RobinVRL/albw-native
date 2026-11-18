#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_002ECA34(int param_1);
extern int func_002F4260(int param_1,int param_2);
extern int func_00520FC0(void);
extern int func_0053F480(int param_1);
extern int func_00548B78(int param_1,float *param_2,float fparam_0);
extern float func_0058A404(int param_1);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern float DAT_002f6718;
extern int *DAT_002f671c;
extern int DAT_002f6720;
extern int *DAT_002f6724;
extern int *DAT_002f6728;
extern undefined4 DAT_002f672c;

// USA 002F65AC <- EU 002F6588 (Ghidra, non-matching)
// GLOBAL DAT_002f6718 float
// GLOBAL DAT_002f671c int *
// GLOBAL DAT_002f6720 int
// GLOBAL DAT_002f6724 int *
// GLOBAL DAT_002f6728 int *
// GLOBAL DAT_002f672c undefined4

undefined4 func_002F65AC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  float in_s0;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((int *)(albw_frame + 0x0))
  if (*(uint *)(param_1 + 0xb0c) < *(uint *)(param_1 + 0xb10)) {
    *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) + 1;
  }
  else {
    func_00520FC0();
    if (*(char *)(param_1 + 0xd45) == '\x01') {
      if (*(char *)(param_1 + 0xd48) == '\x02') {
        iVar2 = 0x11;
      }
      else {
        iVar2 = 0xe;
      }
      goto LAB_002f65e4;
    }
    iVar2 = func_002F4260(param_1,2);
    if (iVar2 != 0x23) goto LAB_002f65e4;
  }
  if (*(char *)(param_1 + 0xd3d) == '\0') {
    pfVar3 = (float *)func_00520FC0();
    iVar2 = func_00548B78(param_1,pfVar3,DAT_002f6718);
    if (iVar2 == 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0xb3c) < *(uint *)(param_1 + 0xb40)) {
      return 0;
    }
    if (*DAT_002f671c == 0) {
      return 0;
    }
    iVar2 = func_0053F480(*DAT_002f671c);
    if (iVar2 == 0) {
      return 0;
    }
    fparam_0 = func_0058A404(param_1);
    if (DAT_002f6720 < (int)ALBW_AS_U32(fparam_0)) {
      iVar2 = 0;
    }
    else if ((int)ALBW_AS_U32(fparam_0) < 0x3f000001) {
      iVar2 = 2;
    }
    else {
      iVar2 = 1;
    }
    uVar4 = func_00111A64((uint *)(*DAT_002f6724 + 0x660));
    uVar1 = DAT_002f672c;
    local_20[0] = *DAT_002f6728;
    local_20[1] = DAT_002f6728[1];
    local_20[2] = DAT_002f6728[2];
    if (local_20[iVar2] <= (int)((ulonglong)uVar4 * 100 >> 0x20)) {
      *(undefined4 *)(param_1 + 0xb40) = 0xc;
      *(undefined4 *)(param_1 + 0xb44) = uVar1;
      *(undefined4 *)(param_1 + 0xb3c) = 0;
      return 0;
    }
    return func_006640EC((undefined4 *)(param_1 + 0x8c8),4,fparam_0);
  }
  iVar2 = func_002ECA34(param_1);
LAB_002f65e4:
  return func_006640EC((undefined4 *)(param_1 + 0x8c8),(char)iVar2,in_s0);
}

