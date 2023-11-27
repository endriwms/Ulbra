export default function Header({ title, index, sizeList }) {
  return (
    <div>
      <h1 className="text-2xl font-bold">{ title }</h1>
      <p className="text-xs text-zinc-500">({index} of { sizeList })</p>
    </div>
  )
}
