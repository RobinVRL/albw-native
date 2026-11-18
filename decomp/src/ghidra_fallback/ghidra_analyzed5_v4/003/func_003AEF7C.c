#include "ghidra_types.h"

extern int func_00532CC0(int param_1,uint param_2,float fparam_0);
extern int func_00539418(undefined4 param_1,int param_2,undefined4 *param_3);
extern float DAT_003af084;
extern float DAT_003af088;
extern undefined4 DAT_003af08c;
extern undefined4 DAT_003af090;
extern undefined4 DAT_003af094;

// USA 003AEF7C <- EU 003AEF58 (Ghidra, non-matching)
// GLOBAL DAT_003af084 float
// GLOBAL DAT_003af088 float
// GLOBAL DAT_003af08c undefined4
// GLOBAL DAT_003af090 undefined4
// GLOBAL DAT_003af094 undefined4

undefined4 func_003AEF7C(int param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  fVar5 = *(float *)(param_1 + 0x1e4) * DAT_003af084;
  uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_003af088 <= fVar5) << 0x1d;
  local_14 = DAT_003af088;
  if (!SUB41(uVar1 >> 0x1d,0)) {
    local_14 = fVar5;
  }
  pcVar3 = param_2;
  if (*param_2 != '\x02') {
    pcVar3 = *(char **)(param_1 + 0x1d4);
  }
  iVar2 = *(int *)(param_1 + 0x1ec);
  if ((*param_2 != '\x02' && pcVar3 != (char *)0x0) && (*(char *)(iVar2 + 0x50) == '\x02')) {
    fVar5 = DAT_003af088;
    if (*(char *)(iVar2 + 0x90) == *(char *)(iVar2 + 0x92)) {
      if (*(char *)(param_1 + 0x1e9) == '\x03') {
        fVar4 = (float)VectorSignedToFloat(8,(byte)(uVar1 >> 0x15) & 3);
        fVar5 = (float)VectorSignedToFloat((int)*(char *)(*(int *)(param_1 + 0x1ec) + 0x91),
                                           (byte)(uVar1 >> 0x15) & 3);
        fVar5 = fVar5 / fVar4;
      }
      else {
        local_14 = DAT_003af088;
        if (*(char *)(iVar2 + 0x91) == '\0') goto LAB_003af024;
      }
    }
    return func_00532CC0(*(int *)(param_1 + 0x1ec),(uint)(*param_2 == '\0'),fVar5);
  }
LAB_003af024:
  if (*(char *)(iVar2 + 0x94) == '\0') {
    local_20 = DAT_003af090;
    local_1c = DAT_003af094;
    local_18 = DAT_003af090;
    return func_00539418(param_1,*(int *)(param_2 + 4),&local_20);
  }
  local_20 = DAT_003af08c;
  local_1c = DAT_003af08c;
  local_18 = DAT_003af08c;
  return func_00539418(param_1,*(int *)(param_2 + 4),&local_20);
}

