#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_00520FC0(void);
extern int func_00556068(int param_1);
extern int func_0058E2B8(int *param_1);
extern float DAT_00636e6c;
extern uint DAT_00636e70;
extern uint DAT_00636e74;
extern int DAT_00636e78;

// USA 00636CC4 <- EU 00636C9C (Ghidra, non-matching)
// GLOBAL DAT_00636e6c float
// GLOBAL DAT_00636e70 uint
// GLOBAL DAT_00636e74 uint
// GLOBAL DAT_00636e78 int

undefined4 func_00636CC4(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  code *pcVar10;
  int *unaff_r7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 ((float *)(albw_frame + 0xc))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define local_18 (*(int *)(albw_frame + 0x18))
  if ((((param_1[0x22b] & 0x10U) != 0) || ((char)param_1[0x216] == '\x01')) &&
     ((char)param_1[0x262] == '\0')) {
    *(undefined1 *)(param_1 + 0x262) = 1;
  }
  cVar1 = (char)param_1[0x262];
  if (cVar1 == '\0') {
    pfVar4 = (float *)func_00520FC0();
    local_30 = *pfVar4;
    local_2c = pfVar4[1];
    local_28 = pfVar4[2];
    func_00115C70(local_24,&local_30,(float *)(param_1 + 0xf4));
    iVar5 = func_004904CC(local_24[0],local_1c);
    param_1[0x206] = iVar5;
    fVar3 = DAT_00636e6c;
    param_1[0x1fb] = (int)ALBW_AS_U32(local_30);
    param_1[0x1fc] = (int)ALBW_AS_U32(local_2c);
    param_1[0x1fd] = (int)ALBW_AS_U32(local_28);
    param_1[0x1fc] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x1fc]) + fVar3));
    local_18 = param_1[0x206] - param_1[0xfa];
    uVar6 = func_0058E2B8(&local_18);
    uVar9 = DAT_00636e70;
    if ((param_1[0x22b] & 1U) == 0) {
      uVar9 = DAT_00636e74;
    }
    if (uVar6 <= uVar9) {
      *(undefined1 *)((int)param_1 + 0x861) = 0;
      goto LAB_00636e3c;
    }
    pcVar10 = *(code **)(*param_1 + 0xac);
    uVar2 = (undefined1)param_1[0x215];
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        if ((param_1 != (int *)0xfffff8a4) &&
           (piVar7 = (int *)param_1[0x1dd], piVar7 != (int *)0x0 && piVar7 != param_1 + 0x1d7)) {
          puVar8 = func_00556068((int)piVar7);
          if (puVar8 != (undefined4 *)0x0) {
            unaff_r7 = (int *)param_1[0x1dd];
          }
          if (((puVar8 != (undefined4 *)0x0 && unaff_r7 != (int *)0x0) &&
               unaff_r7 != param_1 + 0x1d7) &&
             (puVar8 = func_00556068((int)unaff_r7), puVar8 != (undefined4 *)0x0)) {
            (**(code **)(*unaff_r7 + 0x20))(unaff_r7,param_1 + 0x1fb);
          }
        }
        (**(code **)(*param_1 + 0xac))(param_1,*(undefined1 *)((int)param_1 + 0x853),0xffffffff);
      }
      goto LAB_00636e3c;
    }
    uVar2 = *(undefined1 *)((int)param_1 + 0x855);
    pcVar10 = *(code **)(*param_1 + 0xac);
  }
  (*pcVar10)(param_1,uVar2,0xffffffff);
LAB_00636e3c:
  iVar5 = DAT_00636e78;
  param_1[0xf7] = DAT_00636e78;
  param_1[0xf8] = iVar5;
  param_1[0xf9] = iVar5;
  *(undefined1 *)((int)param_1 + 0x85d) = 1;
                    /* WARNING: Could not recover jumptable at 0x00636e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x98))(param_1);
}

