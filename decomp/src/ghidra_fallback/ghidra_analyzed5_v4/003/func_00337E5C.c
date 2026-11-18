#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_001E6AF8(int param_1);
extern int func_001E6CEC(undefined4 *param_1,uint *param_2,undefined4 param_3);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_00337D34(int param_1);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int DAT_0033800c;
extern int DAT_00338010;
extern uint DAT_00338014;
extern float DAT_00338018;
extern undefined4 *DAT_0033801c;
extern int *DAT_00338020;

// USA 00337E5C <- EU 00337E38 (Ghidra, non-matching)
// GLOBAL DAT_0033800c int
// GLOBAL DAT_00338010 int
// GLOBAL DAT_00338014 uint
// GLOBAL DAT_00338018 float
// GLOBAL DAT_0033801c undefined4 *
// GLOBAL DAT_00338020 int *

/* WARNING: Variable defined which should be unmapped: objStack_70 */

int * func_00337E5C(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define objStack_70 ((uint *)(albw_frame + 0x0))
  #define local_44 (*(uint *)(albw_frame + 0x2c))
  #define local_40 (*(int *)(albw_frame + 0x30))
  #define local_3c (*(float *)(albw_frame + 0x34))
  #define iStack_38 (*(int *)(albw_frame + 0x38))
  #define local_34 (*(int *)(albw_frame + 0x3c))
  #define iStack_30 (*(int *)(albw_frame + 0x40))
  #define iStack_2c (*(int *)(albw_frame + 0x44))
  #define local_28 (*(undefined4 *)(albw_frame + 0x48))
  #define local_24 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x50))
  piVar2 = (int *)func_001E6CEC(param_1,param_2,0xc);
  iVar3 = DAT_0033800c + 0x98;
  *piVar2 = DAT_0033800c;
  piVar2[200] = iVar3;
  piVar2[0x1e2] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x48);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_004EDC9C(puVar4);
  }
  iVar3 = DAT_00338010;
  piVar2[0x1e3] = (int)puVar5;
  piVar2[0x1e4] = iVar3;
  *(undefined1 *)(piVar2 + 0x1e5) = 0;
  iVar3 = func_001E6AF8((int)piVar2);
  if (iVar3 == 0) {
    func_003249E0((int)piVar2,0);
    objStack_70[1] = 0;
    objStack_70[0] = 1;
    objStack_70[2] = 0;
    iVar3 = func_0014E428((int)piVar2,0,0,0,1,0,0);
    piVar2[0x1e2] = iVar3;
    *(int *)(piVar2[0x1e3] + 0x18) = piVar2[0x103];
    local_44 = piVar2[0xb3];
    func_004EDAD0(piVar2[0x1e3],&local_44);
    objStack_70[9] = DAT_00338014;
    uVar6 = piVar2[0x1e3];
    *(short *)(uVar6 + 0x2c) = (short)piVar2[0x15];
    piVar1 = DAT_00338020;
    objStack_70[4] = uVar6 & 0xffff0000 | 0xffff;
    objStack_70[1] = 0;
    objStack_70[2] = 0;
    objStack_70[3] = 0;
    objStack_70[6] = 0;
    (*(undefined1 *)((char *)&objStack_70[10] + 0)) = 0;
    (*(undefined1 *)((char *)&objStack_70[10] + 1)) = 1;
    local_40 = piVar2[0xf4];
    iStack_38 = piVar2[0xf6];
    objStack_70[8] = (uint)&local_40;
    local_3c = ALBW_AS_F32(piVar2[0xf5]) + DAT_00338018;
    local_34 = piVar2[0xf4];
    iStack_30 = piVar2[0xf5];
    iStack_2c = piVar2[0xf6];
    objStack_70[7] = (uint)&local_34;
    local_28 = *DAT_0033801c;
    local_24 = DAT_0033801c[1];
    uStack_20 = DAT_0033801c[2];
    objStack_70[0] = (uint)&local_28;
    objStack_70[5] = 7;
    iVar3 = func_004A8030(*DAT_00338020,(int *)objStack_70,3);
    if (iVar3 != 0) {
      piVar2[0x1e4] = (int)ALBW_AS_U32((ALBW_AS_F32(piVar2[0x1e4]) + *(float *)(objStack_70[0] + 4)));
    }
    func_00337D34((int)piVar2);
    func_004A879C(*piVar1,piVar2[0x1e3],2);
    func_00324964((int)piVar2);
  }
  return piVar2;
}

