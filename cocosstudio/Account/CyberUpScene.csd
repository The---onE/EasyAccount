<GameProjectFile>
  <PropertyGroup Type="Scene" Name="CyberUpScene" ID="fefa233d-303c-4b8e-bee3-67378789809b" Version="2.1.5.0" />
  <Content ctype="GameProjectContent">
    <Content>
      <Animation Duration="0" Speed="1.0000" />
      <ObjectData Name="CyberUpScene" FrameEvent="" CustomClassName="ManageScene" Tag="34" ctype="SingleNodeObjectData">
        <Position X="0.0000" Y="0.0000" />
        <Scale ScaleX="1.0000" ScaleY="1.0000" />
        <AnchorPoint />
        <CColor A="255" R="255" G="255" B="255" />
        <Size X="768.0000" Y="1024.0000" />
        <PrePosition X="0.0000" Y="0.0000" />
        <PreSize X="0.0000" Y="0.0000" />
        <Children>
          <NodeObjectData Name="text" ActionTag="-1495474205" FrameEvent="" Tag="40" LeftMargin="234.0000" RightMargin="234.0000" TopMargin="374.0000" BottomMargin="550.0000" FontSize="100" LabelText="网银充值" ctype="TextObjectData">
            <Position X="384.0000" Y="600.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="400.0000" Y="100.0000" />
            <PrePosition X="0.5000" Y="0.5859" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="numText" ActionTag="1868556234" FrameEvent="" Tag="41" RightMargin="468.0000" TopMargin="474.0000" BottomMargin="450.0000" FontSize="100" LabelText="金额：" ctype="TextObjectData">
            <Position X="0.0000" Y="500.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="300.0000" Y="100.0000" />
            <PrePosition X="0.0000" Y="0.4883" />
            <PreSize X="0.0000" Y="0.0000" />
          </NodeObjectData>
          <NodeObjectData Name="num" ActionTag="295094830" FrameEvent="" Tag="42" LeftMargin="168.0000" TopMargin="474.0000" BottomMargin="450.0000" TouchEnable="True" FontSize="100" IsCustomSize="True" LabelText="" PlaceHolderText="输入金额" MaxLengthEnable="True" MaxLengthText="6" ctype="TextFieldObjectData">
            <Position X="768.0000" Y="500.0000" />
            <Scale ScaleX="0.8000" ScaleY="0.8000" />
            <AnchorPoint ScaleX="1.0000" ScaleY="0.5000" />
            <CColor A="255" R="255" G="255" B="255" />
            <Size X="600.0000" Y="100.0000" />
            <PrePosition X="1.0000" Y="0.4883" />
            <PreSize X="0.7813" Y="0.0977" />
          </NodeObjectData>
          <NodeObjectData Name="ok" ActionTag="-1222644272" FrameEvent="" CallBackType="Click" CallBackName="cyberUpClick" Tag="43" LeftMargin="304.0000" RightMargin="304.0000" TopMargin="584.0000" BottomMargin="360.0000" TouchEnable="True" FontSize="80" ButtonText="确定" Scale9Enable="True" Scale9Width="46" Scale9Height="36" ctype="ButtonObjectData">
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
        </Children>
      </ObjectData>
    </Content>
  </Content>
</GameProjectFile>