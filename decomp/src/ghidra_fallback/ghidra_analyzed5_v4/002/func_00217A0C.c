#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00581C5C(int param_1);
extern int func_0058A44C(int param_1);
extern int *DAT_00217c14;
extern float DAT_00217c18;
extern int DAT_00217c1c;
extern int *DAT_00217c20;
extern float DAT_00217c24;
extern undefined DAT_00217c28;
extern char s_SE_IronBall_APPEAR_L_00217c40[];
extern char s_SE_IronBall_ROLL_00217c58[];
extern char s_SE_IronBall_ROLL_L_00217c6c[];
extern char s__SE_IronBall_APPEAR_00217c2b[];
extern char s_cf_00217c2b[];
extern undefined4 _DAT_00217c28;

// USA 00217A0C <- EU 00217A0C (Ghidra, non-matching)
// GLOBAL DAT_00217c14 int *
// GLOBAL DAT_00217c18 float
// GLOBAL DAT_00217c1c int
// GLOBAL DAT_00217c20 int *
// GLOBAL DAT_00217c24 float
// GLOBAL DAT_00217c28 undefined
// GLOBAL s_cf_00217c2b string
// GLOBAL s_SE_IronBall_APPEAR_L_00217c40 string
// GLOBAL s_SE_IronBall_ROLL_00217c58 string
// GLOBAL s_SE_IronBall_ROLL_L_00217c6c string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00217A0C(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  iVar5 = func_00581C5C(*DAT_00217c14);
  if (iVar5 == 0) {
    return;
  }
  if ((int)(short)param_1[0x15] != *(int *)(iVar5 + 0x3c0)) {
    *(undefined1 *)(param_1 + 0x241) = 1;
    return;
  }
  func_00115C70(&local_38,(float *)(param_1 + 0xf4),(float *)(param_1 + 0xda));
  fVar8 = local_38;
  pcVar7 = local_34;
  iVar6 = func_0058A44C((int)param_1);
  fVar4 = DAT_00217c24;
  piVar3 = DAT_00217c20;
  iVar2 = DAT_00217c1c;
  fVar1 = DAT_00217c18;
  if ((iVar6 == 0) ||
     (SQRT(fVar8 * fVar8 + ALBW_AS_F32(pcVar7) * ALBW_AS_F32(pcVar7) + fStack_30 * fStack_30) <= DAT_00217c18))
  {
    *(undefined1 *)(param_1 + 0x241) = 1;
    goto LAB_00217bf8;
  }
  if (DAT_00217c1c < (int)pcVar7) {
    *(undefined1 *)(param_1 + 0x241) = 0;
  }
  if (*(char *)(*piVar3 + 0x18) == '\t' || *(char *)(*piVar3 + 0x18) == '\r') {
    if (*(short *)(iVar5 + 0x4a) == 10) {
      if (fStack_30 <= fVar1) goto LAB_00217bf8;
      if ((char)param_1[0x241] == '\0') {
        iVar5 = param_1[0x116];
joined_r0x00217b54:
        if (iVar5 < 0x40000000) {
          local_34 = s__SE_IronBall_APPEAR_00217c2b + 1;
          local_38 = fVar4;
          func_00150A84(param_1,(int *)&local_38,0);
        }
        else {
          local_34 = s_SE_IronBall_APPEAR_L_00217c40;
          local_38 = fVar4;
          func_00150A84(param_1,(int *)&local_38,0);
        }
LAB_00217b0c:
        *(undefined1 *)(param_1 + 0x241) = 1;
      }
    }
    else if (*(short *)(iVar5 + 0x4a) == 0xb) {
      if (((int)_DAT_00217c28 <= (int)pcVar7) || ((_DAT_00217c28 | _DAT_00217c28 << 0x1f) <= pcVar7)
         ) goto LAB_00217bf8;
      if (iVar2 < param_1[0x23f]) {
        if ((char)param_1[0x241] == '\0') {
          iVar5 = param_1[0x116];
          goto joined_r0x00217b54;
        }
        goto LAB_00217b0c;
      }
    }
  }
  local_38 = fVar4;
  if (param_1[0x116] < 0x40000000) {
    local_34 = s_SE_IronBall_ROLL_00217c58;
    func_001507D8((int)param_1,(int *)&local_38,0);
  }
  else {
    local_34 = s_SE_IronBall_ROLL_L_00217c6c;
    func_001507D8((int)param_1,(int *)&local_38,0);
  }
LAB_00217bf8:
  param_1[0x23e] = (int)ALBW_AS_U32(fVar8);
  param_1[0x23f] = (int)pcVar7;
  param_1[0x240] = (int)ALBW_AS_U32(fStack_30);
  return;
}

