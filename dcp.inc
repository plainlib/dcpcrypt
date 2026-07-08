
{ begin dcp.inc }

{$IFDEF FPC}
  // FPC/Lazarus
{$ELSE}
  {$IF CompilerVersion >= 23}
    {$DEFINE DELPHIXE2_UP}
    {$POINTERMATH ON}
  {$IFEND}
{$ENDIF}

{ end dcp.inc}
