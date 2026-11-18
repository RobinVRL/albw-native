#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_003C33F0(int param_1);
extern int func_004FC244(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5);
extern int func_00520FC0(void);
extern int func_0053A900(int param_1);
extern undefined8 func_0058A474(undefined4 param_1,uint param_2);
extern int func_0058E2B8(int *param_1);
extern int func_00660718(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int DAT_00269950;
extern int *DAT_00269954;
extern int DAT_00269958;
extern int DAT_0026995c;

// USA 00269640 <- EU 00269668 (Ghidra, non-matching)
// GLOBAL DAT_00269950 int
// GLOBAL DAT_00269954 int *
// GLOBAL DAT_00269958 int
// GLOBAL DAT_0026995c int

/* WARNING: Variable defined which should be unmapped: objStack_40 */

uint func_00269640(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_40 ((uint *)(albw_frame + 0x0))
  #define local_34 ((float *)(albw_frame + 0xc))
  #define local_28 (*(int *)(albw_frame + 0x18))
  if ((short)param_1[0x142] < 1) {
    param_1[0x167] = param_1[0x167] | 0x4000;
    objStack_40[0] = 1;
    func_004FC244(param_1,(int *)param_1[0x10f],0xc,1,1);
    return 0;
  }
  if ((param_2 == 10) ||
     (((param_1[0x2ca] < 1 && (param_2 == 0x1d)) &&
      (iVar1 = func_0053A900((int)param_1), iVar1 == 0)))) {
    func_003C33F0((int)(param_1 + 0x2fc));
    return 0;
  }
  if ((param_2 & 0xff) - 5 < 5) {
    return 0;
  }
  piVar5 = param_1 + 0x232;
  if ((*(char *)((int)param_1 + 0xba6) == '\0') && (param_1[0x2ca] < 1)) {
    *(undefined1 *)((int)param_1 + 0xba5) = 0;
    param_1[0x26a] = 0;
    func_00660718(piVar5,9);
  }
  else {
    if ((*(char *)((int)param_1 + 0xba7) == '\0') && (0x17 < param_1[0x2e8])) {
      *(undefined1 *)((int)param_1 + 0xba5) = 0;
      *(undefined1 *)((int)param_1 + 0xba7) = 1;
      *(undefined1 *)((int)param_1 + 0xbaa) = 1;
      param_1[0x26a] = 0;
      func_00660718(piVar5,0xb);
      objStack_40[0] = 1;
      func_004FC244(param_1,(int *)param_1[0x10f],0xc,1,1);
      return 0;
    }
    if (((param_1[0x2ca] < 1) && ((char)param_1[0x2e9] != '\0')) &&
       (*(char *)(param_3 + 0x24) == '\x02')) {
      param_1[0x26a] = 0;
      return param_2;
    }
    fVar2 = ALBW_AS_F32(param_1[0x26a]);
    if (0 < (int)ALBW_AS_U32(fVar2)) {
      pfVar3 = (float *)func_00520FC0();
      fVar2 = ALBW_AS_F32((int)*(char *)(DAT_00269950 + (int)param_1));
      if ((fVar2 != 1.12104e-44 && fVar2 != 1.96182e-44) &&
         (fVar2 = *(float *)(*DAT_00269954 + 0x44), fVar2 == 0.0)) {
        fVar4 = *(float *)(DAT_00269958 + 100);
        func_00115C70(local_34,pfVar3,(float *)(param_1 + 0xf4));
        objStack_40[0] = (uint)ALBW_AS_U32(local_34[0]);
        local_28 = func_0068C690((float *)objStack_40);
        local_28 = param_1[0xfa] - local_28;
        fVar2 = ALBW_AS_F32(func_0058E2B8(&local_28));
        if (((uint)ALBW_AS_U32(fVar2) < (uint)ALBW_AS_U32(fVar4)) &&
           (fVar2 = (ALBW_AS_F32(param_1[0xf4]) - *pfVar3) * (ALBW_AS_F32(param_1[0xf4]) - *pfVar3) +
                    (ALBW_AS_F32(param_1[0xf6]) - pfVar3[2]) * (ALBW_AS_F32(param_1[0xf6]) - pfVar3[2]),
           (int)ALBW_AS_U32(fVar2) <= DAT_0026995c)) {
          uVar9 = func_0058A474(param_1,0x32);
          fVar2 = 0.0;
          if ((int)uVar9 != 0) {
            *(undefined1 *)((int)param_1 + 0xba5) = 0;
            func_00660718(piVar5,8);
            goto LAB_0026992c;
          }
        }
      }
      param_1[0x26a] = 0;
    }
    if (param_2 == 3) {
      return 0;
    }
    bVar8 = 0x1c < param_2;
    bVar6 = param_2 != 0x1d;
    if (bVar6) {
      fVar2 = ALBW_AS_F32((param_2 & 0xff));
      bVar8 = 0x1d < (uint)ALBW_AS_U32(fVar2);
    }
    bVar7 = fVar2 != 4.2039e-44;
    if (bVar6 && bVar7) {
      fVar2 = ALBW_AS_F32(((int)ALBW_AS_U32(fVar2) - 0xe));
      bVar8 = 2 < (uint)ALBW_AS_U32(fVar2);
    }
    if (bVar8 && ((bVar6 && bVar7) && fVar2 != 4.2039e-45)) {
      param_1[0x168] = param_1[0x168] | 0x80;
      return param_2;
    }
    if ((char)param_1[0x2e9] != '\0') {
      return 0xe;
    }
  }
LAB_0026992c:
  objStack_40[0] = 1;
  func_004FC244(param_1,(int *)param_1[0x10f],0xc,1,1);
  return 0;
}

