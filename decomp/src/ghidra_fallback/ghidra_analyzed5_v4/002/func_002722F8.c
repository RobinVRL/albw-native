#include "ghidra_types.h"

extern int func_0016B438(int param_1);
extern int func_00270114(int param_1);
extern int func_002715F8(int param_1,uint param_2,int *param_3);
extern int func_00271968(int param_1,int param_2,int *param_3);
extern int func_00582260(int param_1,uint param_2,uint param_3);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern undefined8 func_00689928(int *param_1,int *param_2,uint param_3);
extern int *DAT_002724dc;
extern int DAT_002724e0;
extern int *DAT_002724e4;
extern int DAT_002724e8;
extern int DAT_002724ec;
extern undefined1 DAT_002724f0;
extern int *DAT_002724fc;
extern undefined DAT_00272500;
extern int *DAT_00272504;

// USA 002722F8 <- EU 00272320 (Ghidra, non-matching)
// GLOBAL DAT_002724dc int *
// GLOBAL DAT_002724e0 int
// GLOBAL DAT_002724e4 int *
// GLOBAL DAT_002724e8 int
// GLOBAL DAT_002724ec int
// GLOBAL DAT_002724f0 undefined1
// GLOBAL DAT_002724fc int *
// GLOBAL DAT_00272500 undefined
// GLOBAL DAT_00272504 int *

undefined4 func_002722F8(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(int *)(albw_frame + 0x0))
  #define local_7c (*(undefined1 * *)(albw_frame + 0x4))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x8))
  #define local_74 ((undefined1 *)(albw_frame + 0xc))
  #define uStack_35 (*(undefined1 *)(albw_frame + 0x4b))
  #define local_30 (*(int *)(albw_frame + 0x50))
  #define local_2c (*(undefined1 * *)(albw_frame + 0x54))
  func_0016B438(*DAT_002724dc);
  iVar4 = DAT_002724e0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(iVar4 + param_1) = 0;
  *(undefined4 *)(param_1 + 0x3d68) = 0;
  *(undefined4 *)(param_1 + 0x3d6c) = 0;
  *(undefined4 *)(param_1 + 0x3d70) = 0;
  iVar4 = func_00582260(*DAT_002724e4,(int)*param_2,*(uint *)(param_2 + 4));
  iVar2 = DAT_002724e8;
  local_7c = local_74;
  uStack_78 = 0x40;
  uStack_35 = 0;
  local_80 = DAT_002724ec;
  local_74[0] = 0;
  func_00689894((int)&local_80,(int *)(iVar4 + 4),0xffffffff);
  local_2c = &DAT_002724f0;
  local_30 = iVar2;
  (**(code **)(local_80 + 8))(&local_80);
  puVar3 = local_7c;
  iVar4 = 0;
  do {
    if (local_7c[iVar4] == '\0') {
      if ((iVar4 < 0x40001) && (iVar4 != 0)) {
        while (iVar4 = iVar4 + -1, -1 < iVar4) {
          (**(code **)(local_30 + 8))(&local_30);
          iVar5 = 0;
          while( true ) {
            if (local_2c[iVar5] == '\0') goto LAB_00272460;
            if (local_2c[iVar5] == puVar3[iVar4]) break;
            iVar5 = iVar5 + 1;
            if (0x40000 < iVar5) goto LAB_00272460;
          }
          puVar3[iVar4] = 0;
        }
      }
      break;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x40001);
LAB_00272460:
  func_002715F8(param_1,1,&local_80);
  cVar1 = *(char *)(*DAT_002724fc + 0x25);
  bVar6 = cVar1 == '\x02';
  if (bVar6) {
    cVar1 = *param_2;
  }
  if (!bVar6 || cVar1 != '\0') {
    local_2c = &DAT_00272500;
    local_30 = iVar2;
    func_00689928(&local_80,&local_30,0xffffffff);
    func_00271968(param_1,1,&local_80);
  }
  *(undefined2 *)(param_1 + 0x7cb2) = 0xffff;
  *(undefined2 *)(param_1 + 0x7cb0) = 0xffff;
  return func_00270114(*DAT_00272504);
}

