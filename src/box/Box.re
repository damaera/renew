open ReactNative;

let (>>=) = Belt.Option.flatMap;
let (<$>) = Belt.Option.map;

[@react.component]
let make =
    /* flex */
    (
      ~alignContent=?,
      ~alignItems=?,
      ~alignSelf=?,
      ~flex=?,
      ~flexBasis=?,
      ~flexDirection=?,
      ~flexGrow=?,
      ~flexShrink=?,
      ~flexWrap=?,
      ~justifyContent=?,
      /* padding */
      ~p=?,
      ~pt=?,
      ~pr=?,
      ~pl=?,
      ~pb=?,
      ~pv=?,
      ~ph=?,
      ~pe=?,
      ~ps=?,
      /* margin */
      ~m=?,
      ~mt=?,
      ~mr=?,
      ~ml=?,
      ~mb=?,
      ~mv=?,
      ~mh=?,
      ~me=?,
      ~ms=?,
      /* position */
      ~position=?,
      ~top=?,
      ~right=?,
      ~left=?,
      ~bottom=?,
      ~start=?,
      ~end_=?,
      /* size */
      ~w=?,
      ~h=?,
      ~maxW=?,
      ~maxH=?,
      ~minW=?,
      ~minH=?,
      ~aspectRatio=?,
      /* bg */
      ~bg=?,
      /* opacity */
      ~opacity=?,
      /* borderWidth */
      ~borderWidth=?,
      ~borderTopWidth=?,
      ~borderRightWidth=?,
      ~borderBottomWidth=?,
      ~borderLeftWidth=?,
      ~borderStartWidth=?,
      ~borderEndWidth=?,
      /* borderRadius */
      ~borderRadius=?,
      ~borderTopRightRadius=?,
      ~borderTopLeftRadius=?,
      ~borderTopStartRadius=?,
      ~borderTopEndRadius=?,
      ~borderBottomRightRadius=?,
      ~borderBottomLeftRadius=?,
      ~borderBottomStartRadius=?,
      ~borderBottomEndRadius=?,
      /* borderColor */
      ~borderColor=?,
      ~borderTopColor=?,
      ~borderRightColor=?,
      ~borderBottomColor=?,
      ~borderLeftColor=?,
      ~borderStartColor=?,
      ~borderEndColor=?,
      /* overflow */
      ~overflow=?,
      /* zIndex */
      ~zIndex=?,
      /* direction */
      ~direction=?,
      // display
      ~display=?,
      /* rest */
      ~style=?,
      ~children=?,
      ~component=<View />,
    ) => {
  /* theme */
  let pt_ = pt;

  // value
  let v = Style.viewStyle;

  let resolvedStyle =
    Style.arrayOption([|
      // flex
      alignContent <$> (a => v(~alignContent=a, ())),
      alignItems <$> (a => v(~alignItems=a, ())),
      alignSelf <$> (a => v(~alignSelf=a, ())),
      flex <$> (a => v(~flex=a, ())),
      flexBasis <$> (a => v(~flexBasis=a, ())),
      flexDirection <$> (a => v(~flexDirection=a, ())),
      flexGrow <$> (a => v(~flex=a, ())),
      flexShrink <$> (a => v(~flexShrink=a, ())),
      flexWrap <$> (a => v(~flexWrap=a, ())),
      justifyContent <$> (a => v(~justifyContent=a, ())),
      // padding
      p <$> (p => v(~padding=p, ())),
      pt_ <$> (pt_ => v(~paddingTop=pt_, ())), // pt is
      pr <$> (pr => v(~paddingRight=pr, ())),
      pb <$> (pb => v(~paddingBottom=pb, ())),
      pl <$> (pl => v(~paddingLeft=pl, ())),
      pv <$> (pv => v(~paddingVertical=pv, ())),
      ph <$> (ph => v(~paddingHorizontal=ph, ())),
      pe <$> (pe => v(~paddingStart=pe, ())),
      ps <$> (ps => v(~paddingEnd=ps, ())),
      // margin
      m <$> (m => v(~margin=m, ())),
      mt <$> (mt => v(~marginTop=mt, ())),
      mr <$> (mr => v(~marginRight=mr, ())),
      mb <$> (mb => v(~marginBottom=mb, ())),
      ml <$> (ml => v(~marginLeft=ml, ())),
      mv <$> (mv => v(~marginVertical=mv, ())),
      mh <$> (mh => v(~marginHorizontal=mh, ())),
      me <$> (me => v(~marginStart=me, ())),
      ms <$> (ms => v(~marginEnd=ms, ())),
      // size
      w <$> (w => v(~width=w, ())),
      h <$> (h => v(~height=h, ())),
      maxW <$> (w => v(~maxWidth=w, ())),
      maxH <$> (h => v(~maxHeight=h, ())),
      minW <$> (w => v(~minWidth=w, ())),
      minH <$> (h => v(~minHeight=h, ())),
      aspectRatio <$> (a => v(~aspectRatio=a, ())),
      // position
      position <$> (p => v(~position=p, ())),
      top <$> (t => v(~top=t, ())),
      right <$> (r => v(~right=r, ())),
      bottom <$> (b => v(~bottom=b, ())),
      left <$> (l => v(~left=l, ())),
      start <$> (s => v(~start=s, ())),
      end_ <$> (e => v(~_end=e, ())),
      // background
      bg <$> (bg => v(~backgroundColor=bg, ())),
      // opacity
      opacity <$> (o => v(~opacity=o, ())),
      // borderWidth
      borderWidth <$> (b => v(~borderWidth=b, ())),
      borderTopWidth <$> (b => v(~borderTopWidth=b, ())),
      borderRightWidth <$> (b => v(~borderRightWidth=b, ())),
      borderBottomWidth <$> (b => v(~borderBottomWidth=b, ())),
      borderLeftWidth <$> (b => v(~borderLeftWidth=b, ())),
      borderStartWidth <$> (b => v(~borderStartWidth=b, ())),
      borderEndWidth <$> (b => v(~borderEndWidth=b, ())),
      // borderRadius
      borderRadius <$> (b => v(~borderRadius=b, ())),
      borderTopRightRadius <$> (b => v(~borderTopRightRadius=b, ())),
      borderTopLeftRadius <$> (b => v(~borderTopLeftRadius=b, ())),
      borderTopStartRadius <$> (b => v(~borderTopStartRadius=b, ())),
      borderTopEndRadius <$> (b => v(~borderTopEndRadius=b, ())),
      borderBottomRightRadius <$> (b => v(~borderBottomRightRadius=b, ())),
      borderBottomLeftRadius <$> (b => v(~borderBottomLeftRadius=b, ())),
      borderBottomStartRadius <$> (b => v(~borderBottomStartRadius=b, ())),
      borderBottomEndRadius <$> (b => v(~borderBottomEndRadius=b, ())),
      // borderColor
      borderColor <$> (b => v(~borderColor=b, ())),
      borderTopColor <$> (b => v(~borderTopColor=b, ())),
      borderRightColor <$> (b => v(~borderRightColor=b, ())),
      borderBottomColor <$> (b => v(~borderBottomColor=b, ())),
      borderLeftColor <$> (b => v(~borderLeftColor=b, ())),
      borderStartColor <$> (b => v(~borderStartColor=b, ())),
      borderEndColor <$> (b => v(~borderEndColor=b, ())),
      // overflow
      overflow <$> (o => v(~overflow=o, ())),
      // zIndex
      zIndex <$> (z => v(~zIndex=z, ())),
      // direction
      direction <$> (d => v(~direction=d, ())),
      // display
      display <$> (d => v(~display=d, ())),
      // rest
      style,
    |]);
  let reactChildren = {
    switch (children) {
    | Some(children) => [|children|]
    | None => [||]
    };
  };
  ReasonReact.cloneElement(
    component,
    ~props={"style": resolvedStyle},
    reactChildren,
  );
};

[@genType]
let default = make;