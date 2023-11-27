export default function Image({ urlImage, alt }) {
  return (
    <div>
      <img
        src={urlImage}
        alt={alt}
        className="w-40"
      />
    </div>
  )
}