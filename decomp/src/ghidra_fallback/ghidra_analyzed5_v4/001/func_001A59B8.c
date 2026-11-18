#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001A5E58(int param_1);
extern int func_0026171C(int param_1,float *param_2,uint *param_3,float *param_4);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern float func_004F898C(void);
extern float func_004F9594(void);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00525BE0(int param_1,float *param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern float DAT_001a5c18;
extern int *DAT_001a5c1c;
extern uint *DAT_001a5c20;
extern undefined4 *DAT_001a5c24;
extern undefined4 DAT_001a5c28;
extern int *DAT_001a5c2c;
extern int DAT_001a5c30;
extern float DAT_001a5c34;
extern float DAT_001a5c38;
extern float DAT_001a5c3c;
extern float DAT_001a5c40;
extern float DAT_001a5c44;
extern int DAT_001a5c48;

// USA 001A59B8 <- EU 001A59B8 (Ghidra, non-matching)
// GLOBAL DAT_001a5c18 float
// GLOBAL DAT_001a5c1c int *
// GLOBAL DAT_001a5c20 uint *
// GLOBAL DAT_001a5c24 undefined4 *
// GLOBAL DAT_001a5c28 undefined4
// GLOBAL DAT_001a5c2c int *
// GLOBAL DAT_001a5c30 int
// GLOBAL DAT_001a5c34 float
// GLOBAL DAT_001a5c38 float
// GLOBAL DAT_001a5c3c float
// GLOBAL DAT_001a5c40 float
// GLOBAL DAT_001a5c44 float
// GLOBAL DAT_001a5c48 int

undefined4 func_001A59B8(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  cVar1 = *(char *)(param_1 + 0x904);
  pfVar6 = (float *)(param_1 + 0x928);
  if (cVar1 == '\0') {
    func_0026171C(*(int *)(param_1 + 0x900),(float *)0x0,(uint *)0x0,(float *)0x0);
  }
  else if (cVar1 == '\x01') {
    fVar7 = DAT_001a5c18;
    puVar2 = (undefined4 *)func_0052FBA0(*DAT_001a5c1c + 0x3dbbc,*(uint *)(param_1 + 0x7a0));
    if (puVar2 != (undefined4 *)0x0) {
      if (((*DAT_001a5c20 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_001a5c20), iVar3 != 0)) {
        *DAT_001a5c24 = DAT_001a5c28;
      }
      iVar3 = (**(code **)*puVar2)(puVar2,DAT_001a5c24);
      puVar4 = (undefined4 *)0x0;
      if (iVar3 != 0) {
        puVar4 = puVar2;
      }
      if (((puVar4 != (undefined4 *)0x0) &&
          (iVar5 = func_00525BE0((int)puVar4,&fStack_28,fVar7), iVar3 = DAT_001a5c30, iVar5 != 0))
         && (*DAT_001a5c2c != 0)) {
        fVar7 = DAT_001a5c34;
        func_0051D2F4((int *)(param_1 + 0x940),**(int **)(*DAT_001a5c2c + 0x24) + -0x80000000,
                      DAT_001a5c30,0x7fffffff,DAT_001a5c34);
        func_0051D2F4((int *)(param_1 + 0x944),0,iVar3,0x7fffffff,fVar7);
        local_24 = local_24 + DAT_001a5c38;
        func_004D838C(pfVar6,&fStack_28,DAT_001a5c38,DAT_001a5c40,DAT_001a5c3c);
        goto LAB_001a5be0;
      }
    }
    func_001A5E58(param_1);
  }
  else {
    if (cVar1 != '\x02') goto LAB_001a5bec;
    fVar7 = func_004F898C();
    fVar7 = *(float *)(param_1 + 0x938) - fVar7;
    fVar8 = func_004F9594();
    if (fVar7 < -fVar8) {
      fVar7 = -fVar8;
    }
    *(float *)(param_1 + 0x938) = fVar7;
    func_00115C54(pfVar6,pfVar6,(float *)(param_1 + 0x934));
    iVar3 = DAT_001a5c48;
    fVar7 = *(float *)(param_1 + 0x8fc);
    fVar7 = fVar7 + -fVar7 * DAT_001a5c44;
    *(float *)(param_1 + 0x8fc) = fVar7;
    *(float *)(*(int *)(*(int *)(param_1 + 0x900) + 0x18) + 0x158) = fVar7;
    if (*(int *)(param_1 + 0x8fc) <= iVar3) {
      func_004CF478(*(int *)(*(int *)(param_1 + 0x900) + 0x18),0);
      *(undefined1 *)(param_1 + 0x904) = 3;
      goto LAB_001a5bec;
    }
  }
LAB_001a5be0:
  if (*(char *)(param_1 + 0x904) == '\0') {
    return 0;
  }
LAB_001a5bec:
  return func_0026171C(*(int *)(param_1 + 0x900),pfVar6,(uint *)(param_1 + 0x940),
                (float *)(param_1 + 0x944));
}

