<GameProjectFile>
  <PropertyGroup Type="Scene" Name="CashUpScene" ID="db36415d-c56c-4494-b056-15f238450480" Version="2.1.5.0" />
  <Content ctype="GameProjectContent">
    <Content>
      <Animation Duration="0" Speed="1.0000" />
      <ObjectData Name="CashUpScene" FrameEvent="" CustomClassName="ManageScene" Tag="49" ctype="SingleNodeObjectData">
        <Position X="0.0000" Y="0.0000" />
        <Scale ScaleX="1.0000" ScaleY="1.0000" />
        <AnchorPoint />
        <CColor A="255" R="255" G="255" B="255" />
        <Size X="768.0000" Y="1024.0000" />
        <PrePosition X="0.0000" Y="0.0000" />
        <PreSize X="0.0000" Y="0.0000" />
        <Children>
          <NodeObjectData Name="text" ActionTag="-1558703070" FrameEvent="" Tag="74" LeftMargin="184.0000" RightMargin="184.0000" TopMargin="274.0000" BottomMargin="650.0000" FontSize="100" LabelText="现金收入" ctype="TextObjectData">
            <Position X="384.0000" Y="700.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="400.0000" Y="100.0000" />
            <PrePosition X="0.5000" Y="0.6836" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="classText" ActionTag="782918551" FrameEvent="" Tag="56" RightMargin="468.0000" TopMargin="374.0000" BottomMargin="550.0000" FontSize="100" LabelText="收入：" ctype="TextObjectData">
            <Position X="0.0000" Y="600.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="300.0000" Y="100.0000" />
            <PrePosition X="0.0000" Y="0.5859" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="class" ActionTag="-2086927859" FrameEvent="" Tag="57" LeftMargin="168.0000" TopMargin="374.0000" BottomMargin="550.0000" TouchEnable="True" FontSize="100" IsCustomSize="True" LabelText="" PlaceHolderText="输入收入类型" MaxLengthEnable="True" MaxLengthText="6" ctype="TextFieldObjectData">
            <Position X="768.0000" Y="600.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="1.0000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="600.0000" Y="100.0000" />
            <PrePosition X="1.0000" Y="0.5859" />
            <PreSize X="0.7813" Y="0.0977" />
          </NodeObjectData>
          <NodeObjectData Name="numText" ActionTag="752305409" FrameEvent="" Tag="58" RightMargin="468.0000" TopMargin="474.0000" BottomMargin="450.0000" FontSize="100" LabelText="金额：" ctype="TextObjectData">
            <Position X="0.0000" Y="500.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="300.0000" Y="100.0000" />
            <PrePosition X="0.0000" Y="0.4883" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="num" ActionTag="379903041" FrameEvent="" Tag="59" LeftMargin="168.0000" TopMargin="474.0000" BottomMargin="450.0000" TouchEnable="True" FontSize="100" IsCustomSize="True" LabelText="" PlaceHolderText="输入金额" MaxLengthEnable="True" MaxLengthText="6" ctype="TextFieldObjectData">
            <Position X="768.0000" Y="500.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="1.0000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="600.0000" Y="100.0000" />
            <PrePosition X="1.0000" Y="0.4883" />
            <PreSize X="0.7813" Y="0.0977" />
          </NodeObjectData>
          <NodeObjectData Name="ok" ActionTag="-2136377586" FrameEvent="" CallBackType="Click" CallBackName="cashUpClick" Tag="60" LeftMargin="304.0000" RightMargin="304.0000" TopMargin="584.0000" BottomMargin="360.0000" TouchEnable="True" FontSize="80" ButtonText="确定" Scale9Enable="True" Scale9Width="46" Scale9Height="36" ctype="ButtonObjectData">
            <Position X="384.0000" Y="400.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="160.0000" Y="80.0000" />
            <PrePosition X="0.5000" Y="0.3906" />
            <PreSize X="0.2083" Y="0.0781" />
            <TextColor A="255" R="65" G="65" B="70" />
            <DisabledFileData Type="Default" Path="Default/Button_Disable.png" />
            <PressedFileData Type="Default" Path="Default/Button_Press.png" />
            <NormalFileData Type="Default" Path="Default/Button_Normal.png" />
          </NodeObjectData>
          <NodeObjectData Name="borrowCheck" ActionTag="-1706996469" FrameEvent="" Tag="86" RightMargin="688.0000" TopMargin="584.0000" BottomMargin="360.0000" TouchEnable="True" ctype="CheckBoxObjectData">
            <Position X="40.0000" Y="400.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="80.0000" Y="80.0000" />
            <PrePosition X="0.0521" Y="0.3906" />
            <PreSize X="0.1042" Y="0.0781" />
            <NormalBackFileData Type="Default" Path="Default/CheckBox_Normal.png" />
            <PressedBackFileData Type="Default" Path="Default/CheckBox_Press.png" />
            <DisableBackFileData Type="Default" Path="Default/CheckBox_Disable.png" />
            <NodeNormalFileData Type="Default" Path="Default/CheckBoxNode_Normal.png" />
            <NodeDisableFileData Type="Default" Path="Default/CheckBoxNode_Disable.png" />
          </NodeObjectData>
          <NodeObjectData Name="borrowText" ActionTag="-284537984" FrameEvent="" Tag="87" LeftMargin="70.0000" RightMargin="598.0000" TopMargin="574.0000" BottomMargin="350.0000" FontSize="100" LabelText="借" ctype="TextObjectData">
            <Position X="120.0000" Y="400.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="100.0000" Y="100.0000" />
            <PrePosition X="0.1563" Y="0.3906" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
        </Children>
      </ObjectData>
    </Content>
  </Content>
</GameProjectFile>