#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00151358(int *param_1);
extern int func_0019B04C(uint param_1);
extern int func_002A27C4(int param_1,int param_2);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_0036B758(int param_1);
extern int func_0036BE78();
extern int func_0036C2B8(undefined4 param_1,undefined4 param_2);
extern int func_0036C408(undefined4 param_1,undefined4 param_2);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FC994(uint param_1,int param_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_00581D60(int param_1);
extern int func_00588F08(int param_1);
extern int func_0058A8F0(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float *DAT_002a567c;
extern float *DAT_002a5680;
extern uint *DAT_002a5684;
extern int *DAT_002a5688;
extern int DAT_002a568c;
extern float DAT_002a5690;
extern int *DAT_002a5694;
extern int DAT_002a5698;
extern float DAT_002a569c;
extern int *DAT_002a56a0;
extern int *DAT_002a56a4;
extern int DAT_002a56a8;

// USA 002A53B0 <- EU 002A538C (Ghidra, non-matching)
// GLOBAL DAT_002a567c float *
// GLOBAL DAT_002a5680 float *
// GLOBAL DAT_002a5684 uint *
// GLOBAL DAT_002a5688 int *
// GLOBAL DAT_002a568c int
// GLOBAL DAT_002a5690 float
// GLOBAL DAT_002a5694 int *
// GLOBAL DAT_002a5698 int
// GLOBAL DAT_002a569c float
// GLOBAL DAT_002a56a0 int *
// GLOBAL DAT_002a56a4 int *
// GLOBAL DAT_002a56a8 int

undefined4 func_002A53B0(int param_1)

{
  char cVar1;
  uint *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  _Alignas(8) unsigned char albw_frame[0x330];
  #define local_328 (*(int *)(albw_frame + 0x8))
  #define local_324 (*(undefined4 *)(albw_frame + 0xc))
  #define local_320 (*(undefined4 *)(albw_frame + 0x10))
  #define local_31c (*(undefined4 *)(albw_frame + 0x14))
  #define local_30c (*(undefined4 *)(albw_frame + 0x24))
  #define local_308 (*(undefined4 *)(albw_frame + 0x28))
  #define local_304 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2e0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x54))
  #define local_2d8 (*(undefined2 *)(albw_frame + 0x58))
  #define local_68 (*(undefined4 *)(albw_frame + 0x2c8))
  #define auStack_60 ((undefined4 *)(albw_frame + 0x2d0))
  #define local_54 (*(undefined4 *)(albw_frame + 0x2dc))
  #define local_44 (*(undefined4 *)(albw_frame + 0x2ec))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2fc))
  #define local_30 (*(float *)(albw_frame + 0x300))
  #define fStack_2c (*(float *)(albw_frame + 0x304))
  #define fStack_28 (*(float *)(albw_frame + 0x308))
  func_002A27C4(param_1,1);
  iVar7 = param_1 + 0x8d4;
  if (*(byte *)(param_1 + 0xb91) < 2) {
    func_00115C54((float *)(param_1 + 0xa84),(float *)(param_1 + 0x3d0),DAT_002a567c);
    func_0036BE78(iVar7);
  }
  puVar2 = DAT_002a5684;
  local_30 = *DAT_002a5680;
  fStack_2c = DAT_002a5680[1];
  fStack_28 = DAT_002a5680[2];
  cVar1 = *(char *)(param_1 + 0xb91);
  if (cVar1 == '\0') {
    pfVar3 = (float *)func_00520FC0();
    func_00115C70(&local_30,pfVar3,(float *)(param_1 + 0x3d0));
    iVar7 = func_0068C690(&local_30);
    iVar7 = func_0051D2F4((int *)(param_1 + 1000),iVar7,DAT_002a568c,*DAT_002a5688,DAT_002a5690);
    if ((iVar7 != 0) &&
       (pfVar3 = (float *)func_00588F08(*DAT_002a5694),
       fVar8 = *(float *)(param_1 + 0x3d0) - *pfVar3,
       fVar9 = *(float *)(param_1 + 0x3d8) - pfVar3[2],
       (int)ALBW_AS_U32((fVar8 * fVar8 + fVar9 * fVar9)) <= DAT_002a5698)) {
      if (*(uint *)(param_1 + 0xb60) < *(uint *)(param_1 + 0xb64)) {
        *(uint *)(param_1 + 0xb60) = *(uint *)(param_1 + 0xb60) + 1;
      }
      else {
        func_004FC07C(param_1,0x11,0xffffffff,0);
        *(char *)(param_1 + 0xb91) = *(char *)(param_1 + 0xb91) + '\x01';
      }
    }
  }
  else {
    if (cVar1 == '\x01') {
      lVar10 = func_0058ACC8(param_1,DAT_002a569c);
      if ((int)lVar10 != 0) {
        func_001119F4(auStack_60,
                      (undefined4 *)
                      (*(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
                      *(int *)(param_1 + 0xb44) * 0x30));
        local_308 = 0;
        local_304 = 0;
        local_30c = 0;
        local_2e0 = 0;
        local_2dc = 0;
        local_68 = 0;
        func_002DFF7C(&local_328);
        local_328 = func_0019B04C(*puVar2);
        uVar4 = func_00581D60(*DAT_002a56a0);
        local_2d8 = (undefined2)uVar4;
        local_324 = local_54;
        local_320 = local_44;
        local_31c = local_34;
        local_308 = *(undefined4 *)(param_1 + 1000);
        local_2dc = *(undefined4 *)(param_1 + 0x2cc);
        piVar5 = func_004C4AF4(*DAT_002a56a4,&local_328,0);
        if (piVar5 != (int *)0x0) {
          func_001151EC(piVar5 + 0x23b,auStack_60);
        }
        *(undefined1 *)(param_1 + 0xb96) = 1;
        iVar6 = DAT_002a56a8;
        piVar5 = *(int **)(param_1 + 0xa1c);
        piVar5[4] = DAT_002a56a8;
        piVar5[5] = iVar6;
        piVar5[6] = iVar6;
        func_00151358(piVar5);
        func_004FC994(param_1 + 0x5a8,*(int *)(param_1 + 0xa10));
        func_004CF478(*(int *)(param_1 + 0xa10),0);
        func_00151148(*(int *)(param_1 + 0xa1c),0);
        *(undefined1 *)(*(int *)(param_1 + 0xa18) + 0x44) = 0;
      }
      func_0036C2B8(iVar7,*puVar2);
      iVar6 = func_0058A8F0(param_1);
      if (iVar6 == 0) {
        return 0;
      }
      *(char *)(param_1 + 0xb91) = *(char *)(param_1 + 0xb91) + '\x01';
    }
    else if (cVar1 != '\x02') {
      return 0;
    }
    func_0036B758(iVar7);
    iVar6 = func_0036BE78(iVar7);
    if (iVar6 != 0) {
      func_0036C408(iVar7,*puVar2);
      return func_00662128((undefined4 *)(param_1 + 0x9e0),1);
    }
  }
  return 0;
}

