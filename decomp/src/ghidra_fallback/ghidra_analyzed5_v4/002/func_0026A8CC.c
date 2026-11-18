#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00267BD4(int param_1,int param_2);
extern int func_00268830(int param_1,float *param_2,undefined4 param_3);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int func_0053A900(int param_1);
extern float func_0058A404(int param_1);
extern undefined8 func_0058A474(undefined4 param_1,uint param_2);
extern int func_0058A8F0(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_00660718(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int DAT_0026aba4;

// USA 0026A8CC <- EU 0026A8F4 (Ghidra, non-matching)
// GLOBAL DAT_0026aba4 int

undefined4 func_0026A8CC(int param_1)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(int *)(albw_frame + 0x4))
  #define fStack_38 (*(float *)(albw_frame + 0x8))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define iStack_28 (*(int *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define iStack_1c (*(int *)(albw_frame + 0x24))
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    func_004FC07C(param_1,0,0xffffffff,0);
  }
  fVar6 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar6);
  iVar1 = DAT_0026aba4;
  if (*(int *)(param_1 + 0xb28) < 1) {
    iVar4 = 0x1e;
  }
  else {
    iVar4 = 0x3c;
  }
  if (*(int *)(param_1 + 0x8c8) <= iVar4) {
    return 0;
  }
  if (*(int *)(param_1 + 0xb28) < 1) {
    if ((*(char *)(param_1 + 0x8cd) != '\r') && (iVar4 = func_0053A900(param_1), iVar4 != 0)) {
      fVar6 = func_0058A404(param_1);
      if (((int)ALBW_AS_U32(fVar6) < 0x3f000001) && (*(char *)(param_1 + 0x904) == '\0')) {
        *(undefined1 *)(param_1 + 0x904) = 1;
      }
      else {
        if ((((*(char *)(param_1 + 0xbaa) != '\0') && (*(int *)(param_1 + 0xb28) < 1)) &&
            (0x17 < *(int *)(param_1 + 0xba0))) && (*(char *)(param_1 + 0xbab) == '\0')) {
          return func_00660718((undefined4 *)(param_1 + 0x8c8),0xe);
        }
        if (((0 < *(int *)(param_1 + 0xb28)) || (*(int *)(param_1 + 0xba0) < 0x18)) ||
           ((*(uint *)(param_1 + 0x8f8) < *(uint *)(param_1 + 0x8fc) ||
            (uVar7 = func_0058A474(param_1,0x32), (int)uVar7 == 0)))) {
          uVar7 = func_0058A474(param_1,0x1e);
          if ((int)uVar7 != 0) {
            pfVar2 = (float *)func_00520FC0();
            uVar5 = *(uint *)(iVar1 + 0x48);
            func_00115C70(&local_2c,pfVar2,(float *)(param_1 + 0x3d0));
            local_40 = local_2c;
            local_3c = iStack_28;
            fStack_38 = local_24;
            iVar1 = func_0068C690(&local_40);
            local_20 = ALBW_AS_F32((*(int *)(param_1 + 1000) - iVar1));
            uVar3 = func_0058E2B8((int *)&local_20);
            if (uVar3 < uVar5) goto LAB_0026ab68;
            goto LAB_0026ab54;
          }
          goto LAB_0026ab80;
        }
      }
      pfVar2 = (float *)func_00520FC0();
      return func_00268830(param_1,pfVar2,6);
    }
  }
  else {
    uVar7 = func_0058A474(param_1,0x32);
    if ((int)uVar7 != 0) {
      pfVar2 = (float *)func_00520FC0();
      uVar5 = *(uint *)(iVar1 + 0x44);
      func_00115C70(&local_24,pfVar2,(float *)(param_1 + 0x3d0));
      local_30 = local_24;
      local_2c = local_20;
      iStack_28 = iStack_1c;
      local_3c = func_0068C690(&local_30);
      local_3c = *(int *)(param_1 + 1000) - local_3c;
      uVar3 = func_0058E2B8(&local_3c);
      if (uVar3 < uVar5) {
LAB_0026ab68:
        return func_00268830(param_1,pfVar2,4);
      }
LAB_0026ab54:
      return func_00660718((undefined4 *)(param_1 + 0x8c8),3);
    }
  }
LAB_0026ab80:
  func_00267BD4(param_1,1);
  return func_00268830(param_1,(float *)(param_1 + 0x984),2);
}

