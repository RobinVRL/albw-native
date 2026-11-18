// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_0066B580(undefined4 *param_1,undefined1 param_2);
extern float DAT_0050a704;
extern int DAT_0050a708;
extern int DAT_0050a70c;
extern undefined DAT_0050a710;
extern int DAT_0050a724;
extern char s__SE_LavaUp_UP_0050a713[];
extern undefined4 _DAT_0050a710;

// USA 0050A500 <- EU 0050A4D8 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_0050a704 float
// GLOBAL DAT_0050a708 int
// GLOBAL DAT_0050a70c int
// GLOBAL DAT_0050a710 undefined
// GLOBAL DAT_0050a724 int

/* WARNING: Removing unreachable block (ram,0x0050a5e0) */
/* WARNING: Removing unreachable block (ram,0x0050a5e4) */
/* WARNING: Removing unreachable block (ram,0x0050a5f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0050A500(int param_1)

{
  char cVar1;
  uint *puVar2;
  float *pfVar3;
  undefined4 in_r1;
  int iVar4;
  undefined4 in_r2;
  int *in_r3;
  bool bVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define iStack_78 (*(int *)(albw_frame + 0x8))
  #define pcStack_74 (*(char * *)(albw_frame + 0xc))
  #define aiStack_70 ((int *)(albw_frame + 0x10))
  func_00169A80(*(int **)(param_1 + 0x410),in_r1,in_r2,in_r3);
  func_00168E9C(*(int **)(param_1 + 0x410),*(int *)(param_1 + 0x40c),(int *)0x0);
  iVar4 = *(int *)(*(int *)(param_1 + 0x414) + 0x14);
  fVar7 = DAT_0050a704;
  if (*(char *)(iVar4 + 0x1c) == '\0') {
    if (*(float *)(iVar4 + 0x10) < DAT_0050a704) {
      if (*(float *)(iVar4 + 8) <= DAT_0050a704) goto LAB_0050a558;
    }
    else if (*(float *)(iVar4 + 8) == *(float *)(iVar4 + 0x14)) {
LAB_0050a558:
      if (**(int **)(*(int *)(param_1 + 0x414) + 0x14) != 0) {
        puVar2 = (uint *)func_002C11E8(aiStack_70,0,10,0);
        func_0016898C(*(int *)(param_1 + 0x414),puVar2);
      }
    }
  }
  iVar4 = DAT_0050a708;
  if (*(short *)(param_1 + 0x2c) != 1) {
    iVar4 = DAT_0050a70c;
  }
  pfVar3 = (float *)(param_1 + 0x458);
  fVar6 = *pfVar3 + ALBW_AS_F32(_DAT_0050a710);
  if ((*(float *)(iVar4 + 4) <= fVar6) || (fVar6 < *pfVar3)) {
    *pfVar3 = *(float *)(iVar4 + 4);
  }
  else {
    *pfVar3 = fVar6;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
  if (*(char *)(iVar4 + 0x1c) == '\0') {
    if (*(float *)(iVar4 + 0x10) < fVar7) {
      if (fVar7 < *(float *)(iVar4 + 8)) goto LAB_0050a6c0;
    }
    else if (*(float *)(iVar4 + 8) != *(float *)(iVar4 + 0x14)) goto LAB_0050a6c0;
    if (*(uint *)(param_1 + 0x44c) < *(uint *)(param_1 + 0x450)) {
      *(uint *)(param_1 + 0x44c) = *(uint *)(param_1 + 0x44c) + 1;
      cVar1 = *(char *)(param_1 + 0x466);
      bVar5 = cVar1 == '\0';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x467);
      }
      if (bVar5 && cVar1 == '\0') {
        if (*(char *)(param_1 + 0x464) != '\0') {
          func_0066B580((undefined4 *)(param_1 + 0x418),4);
        }
        goto LAB_0050a6d8;
      }
    }
    *(undefined1 *)(param_1 + 0x464) = 0;
  }
  else {
LAB_0050a6c0:
    if (*(char *)(param_1 + 0x467) == '\0') goto LAB_0050a6d8;
  }
  func_0066B580((undefined4 *)(param_1 + 0x418),3);
LAB_0050a6d8:
  pcStack_74 = s__SE_LavaUp_UP_0050a713 + 1;
  iStack_78 = DAT_0050a724;
  return func_001507D8(param_1,&iStack_78,0);
}

