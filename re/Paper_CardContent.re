[@bs.module "react-native-paper"]
external reactClass : ReasonReact.reactClass = "CardContent";

let make = (~style: option(BsReactNative.Style.t)=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=Js.Null_undefined.({"style": from_opt(style)}),
    children
  );
