#include "ghidra_types.h"

extern int func_00120024(undefined4 *param_1,int param_2);
extern int func_0025B57C(undefined4 param_1,int *param_2,uint param_3,undefined4 param_4);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004B083C(void);
extern int func_00582260(int param_1,uint param_2,uint param_3);
extern int func_00584B94(int param_1,int param_2);
extern int func_00588354(int param_1,int *param_2);
extern int *DAT_002597a0;
extern int DAT_002597a4;
extern int *DAT_002597a8;
extern int DAT_002597b8;
extern int DAT_002597bc;
extern undefined4 DAT_002597c0;
extern int *DAT_002597c4;
extern undefined4 DAT_002597c8;
extern int *DAT_002597e4;
extern int DAT_002597e8;
extern int DAT_00259818;
extern char s_GROUP_DungeonBoss2nd_002597ec[];
extern char s_GROUP_DungeonBoss_00259804[];
extern char s_GROUP_FieldDarkSandBoss_002597cc[];
extern char s_GROUP_Title_002597ac[];
extern char s_GROUP__s_0025981c[];
extern char s_cf_0025981c[];

// USA 00259550 <- EU 00259578 (Ghidra, non-matching)
// GLOBAL DAT_002597a0 int *
// GLOBAL DAT_002597a4 int
// GLOBAL DAT_002597a8 int *
// GLOBAL DAT_002597b8 int
// GLOBAL DAT_002597bc int
// GLOBAL DAT_002597c0 undefined4
// GLOBAL DAT_002597c4 int *
// GLOBAL DAT_002597c8 undefined4
// GLOBAL DAT_002597e4 int *
// GLOBAL DAT_002597e8 int
// GLOBAL DAT_00259818 int
// GLOBAL s_cf_0025981c string
// GLOBAL s_GROUP_DungeonBoss2nd_002597ec string
// GLOBAL s_GROUP_DungeonBoss_00259804 string
// GLOBAL s_GROUP_FieldDarkSandBoss_002597cc string
// GLOBAL s_GROUP_Title_002597ac string

undefined4 func_00259550(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define local_74 (*(undefined1 * *)(albw_frame + 0xc))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x10))
  #define local_6c ((undefined1 *)(albw_frame + 0x14))
  #define uStack_2d (*(undefined1 *)(albw_frame + 0x53))
  #define local_28 (*(int *)(albw_frame + 0x58))
  #define local_24 (*(char * *)(albw_frame + 0x5c))
  iVar5 = DAT_002597a4;
  if (*(char *)(*DAT_002597a0 + 0x25) != '\x03') {
    if (*(char *)(*DAT_002597a0 + 0x25) == '\x02') {
      local_24 = s_GROUP_Title_002597ac;
      local_28 = DAT_002597a4;
      return func_0025B57C(param_1,&local_28,2,param_4);
    }
    uVar4 = (uint)*param_2;
    if (uVar4 == 0xffffffff) {
      return 0;
    }
    piVar2 = (int *)func_00582260(*DAT_002597a8,uVar4,*(uint *)(param_2 + 4));
    iVar7 = *piVar2;
    iVar3 = func_004B083C();
    if ((iVar3 == 0) && (iVar7 != 0x1a)) {
      local_24 = *(char **)(DAT_002597b8 + 0x6c);
      local_28 = iVar5;
      func_0025B57C(param_1,&local_28,1,param_4);
    }
    local_74 = local_6c;
    uStack_70 = 0x40;
    uStack_2d = 0;
    local_6c[0] = 0;
    local_78 = DAT_002597bc;
    iVar5 = (int)*param_2;
    if (iVar5 != -1) {
      if (iVar5 == 8) {
        pcVar6 = (char *)(*(int *)(param_2 + 4) + 1);
        func_004994B0((int)&local_78,DAT_002597c8,(uint)pcVar6,param_4);
      }
      else {
        func_00120024(&local_28,iVar5);
        (**(code **)(local_28 + 8))(&local_28);
        pcVar6 = local_24;
        func_004994B0((int)&local_78,DAT_002597c0,(uint)local_24,param_4);
      }
      iVar5 = func_00588354(*DAT_002597c4,&local_78);
      if (iVar5 != 0) {
        if (iVar7 == 0x1a || iVar7 == 0xb) goto LAB_00259774;
        if (uVar4 == 1) {
          uVar4 = *(uint *)(param_2 + 4);
          bVar1 = uVar4 == 0x1e;
          if (bVar1) {
            uVar4 = (uint)*(ushort *)(param_2 + 8);
          }
          if (bVar1 && uVar4 == 2) {
            func_004994B0((int)&local_78,s_GROUP_FieldDarkSandBoss_002597cc,(uint)pcVar6,param_4);
          }
        }
        else if (uVar4 == 0x15) {
          if ((*DAT_002597e4 == 0) || (bVar1 = func_00584B94(*DAT_002597e4,DAT_002597e8), !bVar1)) {
            func_004994B0((int)&local_78,s_GROUP_DungeonBoss_00259804,(uint)pcVar6,param_4);
          }
          else {
            func_004994B0((int)&local_78,s_GROUP_DungeonBoss2nd_002597ec,(uint)pcVar6,param_4);
          }
        }
        func_0025B57C(param_1,&local_78,2,param_4);
      }
    }
    if (0 < iVar7) {
LAB_00259774:
      func_004994B0((int)&local_78,s_GROUP__s_0025981c,*(uint *)(DAT_00259818 + iVar7 * 4),param_4);
      return func_0025B57C(param_1,&local_78,3,param_4);
    }
  }
  return 0;
}

