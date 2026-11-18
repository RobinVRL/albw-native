#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_001063C0(int param_1);
extern int func_00109470(int param_1,undefined4 param_2);
extern int func_0010949C(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010B830(undefined4 *param_1);
extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CAE0(undefined4 *param_1,int *param_2);
extern undefined *DAT_001040fc;
extern int DAT_00104100;
extern uint DAT_00104104;
extern undefined DAT_00104108;
extern undefined4 DAT_0010410c;
extern int DAT_00104110;
extern int DAT_00104120;
extern int DAT_00104124;
extern int DAT_00104128;
extern char s_Res_Root_00104114[];
extern char s_cf_00104114[];

// USA 00103E9C <- EU 00103E9C (Ghidra, non-matching)
// GLOBAL DAT_001040fc undefined *
// GLOBAL DAT_00104100 int
// GLOBAL DAT_00104104 uint
// GLOBAL DAT_00104108 undefined
// GLOBAL DAT_0010410c undefined4
// GLOBAL DAT_00104110 int
// GLOBAL DAT_00104120 int
// GLOBAL DAT_00104124 int
// GLOBAL DAT_00104128 int
// GLOBAL s_cf_00104114 string

/* WARNING: Variable defined which should be unmapped: objStack_28 */

undefined4 * func_00103E9C(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  undefined4 *puVar12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_28 ((uint *)(albw_frame + 0x8))
  #define local_20 (*(uint *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  iVar2 = func_00100118(param_1 + 0x10,DAT_001040fc,0x328,7);
  *(undefined4 *)(iVar2 + 0x1618) = 0;
  *(undefined4 *)(iVar2 + 0x161c) = 0;
  *(undefined4 *)(iVar2 + 0x1620) = 0;
  *(undefined4 *)(iVar2 + 0x1624) = 0;
  *(undefined4 *)(iVar2 + 0x1628) = 0;
  *(undefined4 *)(iVar2 + 0x162c) = 0;
  func_0010B3EC((undefined4 *)(iVar2 + 0x1624),0xc4,iVar2 + 0x1630);
  iVar11 = iVar2 + -0x10;
  *(undefined4 *)(iVar2 + 0x1940) = 0;
  *(undefined4 *)(iVar2 + 0x1944) = 0;
  *(undefined4 *)(iVar2 + 0x1948) = 0;
  *(undefined4 *)(iVar2 + 0x194c) = 0;
  *(undefined4 *)(iVar2 + 0x1950) = 0;
  *(undefined4 *)(iVar2 + 0x1954) = 0;
  func_0010B3EC((undefined4 *)(iVar2 + 0x194c),0xc4,iVar2 + 0x1958);
  *(undefined4 *)(iVar2 + 0x1c68) = 0;
  *(undefined4 *)(iVar2 + 0x1c6c) = 0;
  *(undefined4 *)(iVar2 + 0x1c70) = 0;
  *(undefined4 *)(iVar2 + 0x1c74) = 0;
  *(undefined4 *)(iVar2 + 0x1c78) = 0;
  *(undefined4 *)(iVar2 + 0x1c7c) = 0;
  func_0010B3EC((undefined4 *)(iVar2 + 0x1c74),0xc4,iVar2 + 0x1c80);
  iVar7 = DAT_00104100;
  iVar9 = DAT_00104100 + 4;
  *(undefined4 *)(DAT_00104100 + iVar11) = 0;
  *(undefined4 *)(iVar9 + iVar11) = 0;
  *(undefined4 *)(iVar7 + 8 + iVar11) = 0;
  *(undefined4 *)(iVar7 + 0xc + iVar11) = 0;
  *(undefined4 *)(iVar7 + 0x10 + iVar11) = 0;
  puVar3 = func_0010B830((undefined4 *)(iVar2 + 0x1fa4));
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar12 = puVar3 + -0x7ed;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x58);
  uVar1 = DAT_00104104;
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    objStack_28[1] = (uint)&DAT_00104108;
    objStack_28[0] = DAT_00104104;
    puVar5 = func_0010CAE0(puVar4,(int *)objStack_28);
    *puVar5 = DAT_0010410c;
  }
  puVar6 = (undefined4 *)func_0010BAB4(0x60);
  puVar4 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar4 = func_0010949C(puVar6,1,(int *)0x0,4);
  }
  puVar3[7] = puVar4;
  func_00109470((int)puVar4,puVar5);
  iVar7 = func_0010BAB4(0x74);
  puVar5 = (undefined4 *)0x0;
  if (iVar7 != 0) {
    puVar5 = func_001063C0(iVar7);
  }
  *(undefined4 **)(DAT_00104110 + (int)puVar12) = puVar5;
  local_1c = s_Res_Root_00104114;
  local_20 = uVar1;
  objStack_28[0] = 0;
  piVar8 = func_0010B954(DAT_00104120,(int)&local_20,(int *)0x0,1,0);
  iVar7 = DAT_00104124;
  puVar10 = puVar3 + -4;
  puVar5 = puVar3 + -0x7e9;
  if (*puVar10 < 7) {
    puVar5 = puVar5 + *puVar10 * 0xca;
  }
  *puVar5 = piVar8;
  *(int **)(iVar7 + (int)puVar12) = piVar8;
  puVar5 = puVar3 + -0x7e9;
  if (*puVar10 < 7) {
    puVar5 = puVar5 + *puVar10 * 0xca;
  }
  puVar3 = puVar3 + -0x7e9;
  puVar5[3] = 0;
  if (*puVar10 < 7) {
    puVar3 = puVar3 + *puVar10 * 0xca;
  }
  *(undefined4 **)(DAT_00104128 + (int)puVar12) = puVar3 + 3;
  return puVar12;
}

