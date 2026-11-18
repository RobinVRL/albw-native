// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0016656C(int param_1,int param_2);
extern int func_00166C00(int param_1,int param_2);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0046A7AC(int param_1,int *param_2);
extern int *DAT_0046b690;
extern float DAT_0046b694;
extern int DAT_0046b698;
extern char s_BlackSmith_0046b69c[];
extern char s_Dungeon_0046b6b0[];
extern char s_House_0046b6a8[];

// USA 0046B5B8 <- EU 0046B590 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_0046b690 int *
// GLOBAL DAT_0046b694 float
// GLOBAL DAT_0046b698 int
// GLOBAL s_BlackSmith_0046b69c string
// GLOBAL s_Dungeon_0046b6b0 string
// GLOBAL s_House_0046b6a8 string

void func_0046B5B8(int param_1)

{
  int *piVar1;
  int iVar2;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define iStack_30 (*(int *)(albw_frame + 0x0))
  #define pcStack_2c (*(char * *)(albw_frame + 0x4))
  #define iStack_28 (*(int *)(albw_frame + 0x8))
  #define pcStack_24 (*(char * *)(albw_frame + 0xc))
  piVar1 = DAT_0046b690;
  func_0016656C(*DAT_0046b690,param_1);
  func_00166C00(*piVar1,1);
  fparam_0 = DAT_0046b694;
  *(undefined2 *)(param_1 + 0x74) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x74),fparam_0);
  iStack_30 = DAT_0046b698;
  if ((*(byte *)(param_1 + 0xc4) & 0x10) == 0) {
    pcStack_24 = s_House_0046b6a8;
  }
  else {
    pcStack_24 = s_BlackSmith_0046b69c;
  }
  iStack_28 = DAT_0046b698;
  func_0046A7AC(*(int *)(param_1 + 0xc0),&iStack_28);
  pcStack_2c = s_Dungeon_0046b6b0;
  func_0046A7AC(*(int *)(param_1 + 0xbc),&iStack_30);
  iVar2 = *(int *)(param_1 + 0xc0);
  if (*(char *)(iVar2 + 0x48) == '\0') {
    *(undefined2 *)(iVar2 + 0x20) = 0;
    func_002317C0((undefined2 *)(iVar2 + 0x20),fparam_0);
    *(undefined1 *)(iVar2 + 0x48) = 1;
  }
  func_002317C0((undefined2 *)(iVar2 + 0x2c),fparam_0);
  *(undefined1 *)(iVar2 + 0x49) = 0;
  iVar2 = *(int *)(param_1 + 0xbc);
  if (*(char *)(iVar2 + 0x48) != '\0') {
    *(undefined2 *)(iVar2 + 0x20) = 2;
    func_002317C0((undefined2 *)(iVar2 + 0x20),fparam_0);
    *(undefined1 *)(iVar2 + 0x48) = 0;
  }
  func_00231448(iVar2 + 0x2c);
  *(undefined1 *)(iVar2 + 0x49) = 0;
  return;
}

